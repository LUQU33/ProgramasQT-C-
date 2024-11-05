#include "widget.h"
#include "ui_widget.h"
#include "formulario.h"
#include "luchadores.h"
#include <QMessageBox>
#include <cstdlib> // Necesaria para usar rand()
#include <ctime> // Necesaria para time()

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    // Conectamos el boton de AgregarLuchador con el metodo que crea la ventana de formulario
    connect(ui->BotonAgregarLuchador, &QPushButton::clicked, this, &Widget::VentanaFormulario);
    // Conectamos otra vez el boton AgregarLuchador con un metodo mas que actualizara la info en las QComboBox
    connect(ui->BotonAgregarLuchador, &QPushButton::clicked, this, &Widget::llenarComboBoxes);
    // Conectamos el boton de Iniciar Batalla con su respectivo metodo
    connect(ui->BotonBatalla, &QPushButton::clicked, this, &Widget::IniciarBatalla);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::VentanaFormulario(){
    // Creamos instancia de la ventana del formulario
    Formulario VentanaFormulario;
    /*
    // Conectamos nuestro metodo AgregarLuchador con la señal "nuevoLuchadorAgregado" que creamos en formulario.cpp
    connect(&VentanaFormulario, &Formulario::nuevoLuchadorAgregado, this, &Widget::AgregarLuchador);*/
    // Configuramos la ventana como modal
    VentanaFormulario.setModal(true);
    // Mostramos la ventana y bloqueamos la principal hasta que esta secundaria se cierre
    VentanaFormulario.exec();
}

void Widget::llenarComboBoxes(){
    // Limpiamos los ComboBoxes antes de rellenarlos
    ui->SeleccionarLuchador1->clear();
    ui->SeleccionarLuchador2->clear();

    // Iteramos sobre la lista de luchadores
    for (const Luchadores& luchador : Formulario::ListaLuchadores) {
        // Agregamos el nombre del luchador a cada ComboBox
        ui->SeleccionarLuchador1->addItem(luchador.Nombre);
        ui->SeleccionarLuchador2->addItem(luchador.Nombre);
    }
}

void Widget::IniciarBatalla(){
    // Cadena donde ir mostrando lo que sucede en la batalla
    QString infoBatalla = "";

    // Obtenemos los indices de los luchadores seleccionados
    int indiceLuchador1 = ui->SeleccionarLuchador1->currentIndex();
    int indiceLuchador2 = ui->SeleccionarLuchador2->currentIndex();

    // Obtenemos los Luchadores correspondientes gracias a estos indices y utilizando iteradores
    // Primero creamos los iteradores y los apuntamos al inicio de la lista
    auto iterador1 = Formulario::ListaLuchadores.begin();
    auto iterador2 = Formulario::ListaLuchadores.begin();
    // Segundo con std::advance movemos los iteradores dentro de la lista hasta la posicion correspondiente
    std::advance(iterador1, indiceLuchador1);
    std::advance(iterador2, indiceLuchador2);
    // Tercero creamos dos objetos Luchadores tomando los elementos de la lista a los que apuntan nuestros iteradores
    Luchadores luchador1 = *iterador1;
    Luchadores luchador2 = *iterador2;

    // Inicializamos ambas saludes en 100 puntos
    luchador1.Salud = 100;
    luchador2.Salud = 100;

    // Creamos dos objetos atacante y defensor donde guardaremos los luchadores
    Luchadores& atacante = luchador1;
    Luchadores& defensor = luchador2;

    // Contador turno
    int turno = 1;

    // Informamos con un QMessageBox el inicio de la batalla
    infoBatalla += "COMIENZA LA BATALLA ENTRE " + luchador1.Nombre + " Y " + luchador2.Nombre + "! \n";
    infoBatalla += "-----------------------------------------------------------------------------------------------------------\n";
    ui->MostrarBatalla->setText(infoBatalla);

    // Mientras ambas vidas sean mayores a 0, la batalla continuara
    while (luchador1.Salud > 0 && luchador2.Salud >0) {
        // Si estamos en el primer turno de la batalla
        if(turno == 1){
            // Determinamos quien atacara primero basandonos en su velocidad
            if (defensor.Velocidad > atacante.Velocidad) {
                std::swap(atacante, defensor);
            }
        }

        // Calculamos el daño
        int danio = std::max(0, atacante.Ataque - defensor.Defensa);
        // Si el daño es igual a 0 quiere decir que la Defensa fue mayor al Ataque, por lo que solo se recibira un 10% del daño
        if (danio == 0){
            danio = -danio * 0.1;
        }

        // Generamos un numero random para las posibilidades
        int random = rand() % 100;

        // Verificamos si el defensor esquiva (tiene 20% de posibilidades)
        if ( random >= 20){
            // El defensor no esquiva, por lo que recibe el daño
            defensor.Salud -= danio;
            infoBatalla += "Turno " + QString::number(turno) + ": "  + atacante.Nombre + " provocó " + QString::number(danio) + " puntos de daño a " + defensor.Nombre + "! \n";
            infoBatalla += "Vida " + luchador1.Nombre + ": " + QString::number(luchador1.Salud) + " || Vida " + luchador2.Nombre + ": " + QString::number(luchador2.Salud) + "\n";
            infoBatalla += "-----------------------------------------------------------------------------------------------------------\n";
            ui->MostrarBatalla->setText(infoBatalla);
        } else {
            // El defensor esquiva, por lo que evita el daño
            infoBatalla += "Turno " + QString::number(turno) + ": "  + defensor.Nombre + " esquivo el ataque de " + atacante.Nombre + "! \n";
            infoBatalla += "Vida " + luchador1.Nombre + ": " + QString::number(luchador1.Salud) + " || Vida " + luchador2.Nombre + ": " + QString::number(luchador2.Salud) + "\n";
            infoBatalla += "-----------------------------------------------------------------------------------------------------------\n";
            ui->MostrarBatalla->setText(infoBatalla);
        }

        // Cambiamos de roles
        std::swap(atacante, defensor);
        // Agregamos +1 a nuestro contador de turno
        turno ++;
    }

    // Determinamos el ganador y mostramos el resultado
    if (luchador1.Salud > 0){
        infoBatalla += luchador1.Nombre + " HA GANADO LA BATALLA!";
        ui->MostrarBatalla->setText(infoBatalla);
    } else {
        infoBatalla += luchador2.Nombre + " HA GANADO LA BATALLA!";
        ui->MostrarBatalla->setText(infoBatalla);
    }
    //Reiniciamos el contador de turnos
    turno = 0;
}
