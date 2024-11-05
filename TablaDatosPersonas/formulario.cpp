#include "formulario.h"
#include "ui_formulario.h"

#include <QMessageBox>

Formulario::Formulario(QDialog *parent)
    : QDialog(parent)
    , ui(new Ui::Formulario)
{
    ui->setupUi(this);
    // Conectamos el boton OK con el metodo Enviar()
    connect(ui->BotonOk, &QPushButton::clicked, this, &Formulario::Enviar);
    // Conectamos el boton Cancel con el metodo Cerrar()
    connect(ui->BotonCancel, &QPushButton::clicked, this, &Formulario::Cerrar);
}

Formulario::~Formulario()
{
    delete ui;
}

void Formulario::Enviar(){
    // Creamos un objeto NuevaPersona
    DatosPersona NuevaPersona;
    // Guardamos los datos ingresados en nuestro objeto
    NuevaPersona.Apellido = ui->lineEdit_Apellido->text();
    NuevaPersona.Nombre = ui->lineEdit_Nombre->text();

    // Validacion para que el DNI sean solo numeros
    if ((NuevaPersona.dni = ui->lineEdit_DNI->text().toInt()) == 0){
        // Mostrar un mensaje de error indicando que solo se deben ingresar numeros
        QMessageBox::warning(this, "DNI Error", "Por favor, ingrese un dni válido (solo números positivos)");
    }
    else if ((NuevaPersona.dni = ui->lineEdit_DNI->text().toInt()) < 0){
        // Mostrar un mensaje de error indicando que solo se deben ingresar numeros POSITIVOS
        QMessageBox::warning(this, "DNI Error", "Por favor, ingrese un dni válido (solo números positivos)");
    } else {
        NuevaPersona.edad = ui->spinBox_Edad->text().toInt();
        NuevaPersona.altura = ui->doubleSpinBox_Altura->text();
        NuevaPersona.peso = ui->doubleSpinBox_Peso->text();
        NuevaPersona.Observaciones = ui->TextObservaciones->toPlainText();
        // Agregamos el nuevo objeto a la lista
        Personas.push_back(NuevaPersona);
        // Emitimos la señal pasando como argumento NuevaPersona que acabamos de agregar a la lista
        emit nuevaPersonaAgregada(NuevaPersona);
        //Cerramos la ventana
        this->close();
    }
}

void Formulario::Cerrar(){
    //Cerramos la ventana
    this->close();
}
