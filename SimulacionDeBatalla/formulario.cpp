#include "formulario.h"
#include "ui_formulario.h"
#include "luchadores.h"

#include <QMessageBox>

Formulario::Formulario(QDialog *parent)
    : QDialog(parent)
    , ui(new Ui::Formulario)
{
    ui->setupUi(this);
    // Conectamos el boton de Agregar con el metodo EnviarLuchador
    connect(ui->Agregar, &QPushButton::clicked, this, &Formulario::EnviarLuchador);
    // Conectamos el boton Cancelar con su respectivo metodo
    connect(ui->BotonSalir, &QPushButton::clicked, this, &Formulario::Cancelar);
}

Formulario::~Formulario()
{
    delete ui;
}

// Definición de la variable estática fuera de la clase
std::list<Luchadores> Formulario::ListaLuchadores;

void Formulario::EnviarLuchador(){
    // Creamos un objeto Luchador
    Luchadores Luchador;
    // Guardamos los datos ingresados en nuestro objeto

    // Validacion Nombre
    int nom = ui->NombreLuchador->text().toInt();
    // Si nom es distinto de cero, quiere decir que se ingreso un numero en vez de letras
    if (nom != 0 || ui->NombreLuchador->text() == " "){
        // Mostrar un mensaje de error
        QMessageBox::warning(this, "Nombre Error", "Por favor, ingrese solo letras");
    } else {
         Luchador.Nombre = ui->NombreLuchador->text();

        // Validamos que los atributos sean enteros dentro del rango (0-100)

        // Velocidad
        int velocidad = ui->VelocidadLuchador->text().toInt();
        if ( velocidad <= 0 || velocidad > 100){
            // Mostrar un mensaje de error
            QMessageBox::warning(this, "Velocidad Error", "Por favor, ingrese un valor dentro del rango (1-100)");
        } else {
            Luchador.Velocidad = velocidad;
            // Ataque
            int ataque = ui->AtaqueLuchador->text().toInt();
            if(ataque <= 0 || ataque > 100){
                // Mostrar un mensaje de error
                QMessageBox::warning(this, "Ataque Error", "Por favor, ingrese un valor dentro del rango (1-100)");
            } else {
                Luchador.Ataque = ui->AtaqueLuchador->text().toInt();
                // Defensa
                int defensa = ui->DefensaLuchador->text().toInt();
                if (defensa <= 0 || defensa > 100){
                    // Mostrar un mensaje de error
                    QMessageBox::warning(this, "Defensa Error", "Por favor, ingrese un valor dentro del rango (1-100)");
                } else {
                    Luchador.Defensa = ui->DefensaLuchador->text().toInt();
                    // Agregamos el nuevo Luchador a nuestra lista
                    ListaLuchadores.push_back(Luchador);
                    // Cerramos la ventana
                    this->close();
                }
            }
        }
    }
}

void Formulario::Cancelar(){
    //Cerramos la ventana
    this->close();
}
