#include "ventanasecundaria.h"
#include "ui_ventanasecundaria.h"
#include "dequeglobal.h"

VentanaSecundaria::VentanaSecundaria(QDialog *parent)
    : QDialog(parent)
    , ui(new Ui::VentanaSecundaria)
{
    ui->setupUi(this);

    // Conectamos el boton "Buscar" con el metodo de busqueda
    connect(ui->Buscar, &QPushButton::clicked, this, &VentanaSecundaria::on_Buscar_clickeado);
}

VentanaSecundaria::~VentanaSecundaria()
{
    delete ui;
}

using namespace std;

void VentanaSecundaria::on_Buscar_clickeado()
{

    // Guardamos en una variable y convertimos a flotante el valor ingresado por el usuario en el QLineEdit
    QString ingresado = ui->Numero->text();
    float valor = ingresado.toFloat();

    if (DequeGlobal::Validacion(valor)){
        // Buscamos el valor ingresado en el Deque y guardamos el iterador resultante de ::find en una variable de tipo "auto"
        auto iterador = ::find(DequeGlobal::contenedor.begin(), DequeGlobal::contenedor.end(), valor);
        // Verificamos si el elemento existe
        if (iterador != DequeGlobal::contenedor.end()){
            // Calculamos el indice
            int indice = distance(DequeGlobal::contenedor.begin(), iterador);

            // Contamos sus ocurrencias
            int ocurrencias = count(DequeGlobal::contenedor.begin(), DequeGlobal::contenedor.end(), valor);

            // Mostramos el indice en la interfaz
            ui->Ubicacion->setText("Ubicacion: Indice { " + QString::number(indice) + " }");
            // Mostramos las ocurrencias en la interfaz
            ui->CantVeces->setText("Cantidad de veces: " + QString::number(ocurrencias));

            // Vaciamos el texto de ERROR ya que el valor si fue encontrado
            ui->Error->clear();
        } else {
            // Si no lo encuentra, mostramos un mensaje de error
            ui->Error->setText("ERROR, no existe el valor " + QString::number(valor) + " en el Deque.");

            // Vaciamos el indice y cant. veces ya que no se encontro el valor
            ui->Ubicacion->clear();
            ui->CantVeces->clear();
        }
        // Vaciamos el QlineEdit
        ui->Numero->clear();
    }
}

