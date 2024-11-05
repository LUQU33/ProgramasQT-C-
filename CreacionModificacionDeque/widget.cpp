#include "widget.h"
#include "ui_widget.h"
#include "dequeglobal.h"
#include "ventanasecundaria.h"
#include <deque>
// Incluyo el agorithm para poder utilizar el std::find
#include <algorithm>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    // Agregar y Eliminar elementos al deque
    connect(ui->pushButton_AddFrente, &QPushButton::clicked, this, &Widget::on_pushButton_AddFrente_clickeado);
    connect(ui->pushButton_AddFinal, &QPushButton::clicked, this, &Widget::on_pushButton_AddFinal_clickeado);
    connect(ui->pushButton_BorrarElemento, &QPushButton::clicked, this, &Widget::on_pushButton_BorrarElemento_clickeado);
    // Mostrar Deque ordenado
    connect(ui->pushButton_MostrarDeque, &QPushButton::clicked, this, &Widget::on_pushButton_MostrarDeque_clickeado);
    // Buscar elemento (abre una nueva ventana)
    connect(ui->pushButton_BuscarElemento, &QPushButton::clicked, this, &Widget::on_pushButton_BuscarElemento_clickeado);
}

Widget::~Widget()
{
    delete ui;
}

using namespace std;

// Metodo que agrega elemento al frente del Deque
void Widget::on_pushButton_AddFrente_clickeado()
{
    // Guardamos el texto ingresado por la interfaz y lo transformamos a flotante
    QString ingresado = ui->Numero->text();
    float valor = ingresado.toFloat();
    if (DequeGlobal::Validacion(valor)){
        // Lo agregamos al frente del Deque
        DequeGlobal::contenedor.push_front(valor);
        // Mostramos por pantalla el valor agregado
        ui->Resultado->setText("Se agrego " + QString::number(valor) + " al FRENTE.");
        // Vaciamos el QlineEdit
        ui->Numero->clear();
    }
}

// Metodo que agrega elemento al final del Deque
void Widget::on_pushButton_AddFinal_clickeado()
{
    QString ingresado = ui->Numero->text();
    float valor = ingresado.toFloat();
    if (DequeGlobal::Validacion(valor)){
        // Lo agregamos al final del Deque
        DequeGlobal::contenedor.push_back(valor);
        ui->Resultado->setText("Se agrego " + QString::number(valor) + " al FINAL.");
        // Vaciamos el QlineEdit
        ui->Numero->clear();
    }
}

// Metodo que elimina elemento del Deque
void Widget::on_pushButton_BorrarElemento_clickeado()
{
    QString ingresado = ui->Numero->text();
    float valor = ingresado.toFloat();

    if (DequeGlobal::Validacion(valor)){
        // Buscamos el valor en el Deque
        auto iterador = ::find(DequeGlobal::contenedor.begin(), DequeGlobal::contenedor.end(), valor);

        // Verificamos si el elemento existe
        if (iterador != DequeGlobal::contenedor.end()){
            // Eliminamos el elemento del deque
            DequeGlobal::contenedor.erase(iterador);
            // Mostramos en la interfaz
            ui->Resultado->setText("El elemento " + QString::number(valor) + " fue ELIMINADO del Deque.");
        } else {
            ui->Resultado->setText("El valor no se encontró en el deque.");
        }
        // Vaciamos el QlineEdit
        ui->Numero->clear();
    }
}

// Metodo que muestra el Deque y sus elementos
void Widget::on_pushButton_MostrarDeque_clickeado()
{
    // Creamos una cadena vacia donde se almacenaran los elementos
    QString elementosDeque = "";
    // Ordenamos los elementos del Deque
    sort(DequeGlobal::contenedor.begin(), DequeGlobal::contenedor.end());
    // Recorremos el Deque e imprimimos sus elementos
    for(int i : DequeGlobal::contenedor){
        elementosDeque += QString::number(i) + ", ";
    };
    // Mostramos en la interfaz
    ui->Resultado->setText("Deque { " + elementosDeque + "}");
}

// Metodo que crea y abre la ventana secundaria donde se realizara la busqueda
void Widget::on_pushButton_BuscarElemento_clickeado()
{
    // Creamos instancia de la ventana secundaria
    VentanaSecundaria ventanasecundaria;

    // Configuramos la ventana como modal
    ventanasecundaria.setModal(true);

    // Mostramos la ventana y bloqueamos la aplicación hasta que se cierre
    ventanasecundaria.exec();
}
