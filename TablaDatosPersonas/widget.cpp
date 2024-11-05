#include "widget.h"
#include "ui_widget.h"
#include "formulario.h"
#include "datospersona.h"

#include <QPlainTextEdit>
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Configurar el QTableWidget
    // Establecemos cantidad de columnas de acuerdo a los datos que debemos mostrar
    ui->Display->setColumnCount(7);
    // Creamos una lista de cadenas donde almacenamos los encabezados de cada columna
    QStringList headers = {"Nombre", "Apellido", "DNI", "Edad", "Peso", "Altura", "Observaciones"};
    // Asignamos los encabezados creados en los encabezados de las columnas del Display
    ui->Display->setHorizontalHeaderLabels(headers);

    // Conectamos el boton AgregarPersona con el metodo que creara la nueva ventana
    connect(ui->Boton_AgregarPersona, &QPushButton::clicked, this, &Widget::VentanaFormulario);

    // Conectamos el boton ElimnarPersona con su respectivo metodo
    connect(ui->Boton_EliminarPersona, &QPushButton::clicked, this, &Widget::EliminarPersona);

    // Boton SALIR
    connect(ui->Boton_Salir, &QPushButton::clicked, this, &Widget::Salir_Clickeado);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::VentanaFormulario(){
    // Creamos instancia de la ventana del formulario
    Formulario VentanaFormulario;
    // Conectamos el metodo AgregarPersona con la señal "nuevaPersonaAgregada" que creamos en formulario.cpp
    connect(&VentanaFormulario, &Formulario::nuevaPersonaAgregada, this, &Widget::AgregarPersona);
    // Configuramos la ventana como modal
    VentanaFormulario.setModal(true);
    // Mostramos la ventana y bloqueamos la aplicación hasta que se cierre
    VentanaFormulario.exec();
}

void Widget::AgregarPersona(DatosPersona persona){
    // Agregamos el objeto persona a la lista de Widget
    listaPersonas.push_back(persona);
    // Obtenemos la cantidad de filas actuales en la tabla
    int row = ui->Display->rowCount();
    // Insertamos una nueva fila en la tabla
    ui->Display->insertRow(row);

    // Creamos un nuevo item de la tabla para cada uno de los datos del formulario
    QTableWidgetItem *item;
    // Item Nombre
    item = new QTableWidgetItem(persona.Nombre);
    ui->Display->setItem(row, 0, item);
    // Item Apellido
    item = new QTableWidgetItem(persona.Apellido);
    ui->Display->setItem(row, 1, item);
    // Item DNI
    item = new QTableWidgetItem(QString::number(persona.dni));
    ui->Display->setItem(row, 2, item);
    // Item Edad
    item = new QTableWidgetItem(QString::number(persona.edad));
    ui->Display->setItem(row, 3, item);
    // Item Peso
    item = new QTableWidgetItem(persona.peso);
    ui->Display->setItem(row, 4, item);
    // Item Altura
    item = new QTableWidgetItem(persona.altura);
    ui->Display->setItem(row, 5, item);
    // Item Observaciones
    item = new QTableWidgetItem(persona.Observaciones);
    ui->Display->setItem(row, 6, item);

}

void Widget::EliminarPersona(){
    // Obtener el modelo de selección de la tabla
    QItemSelectionModel* selectionModel = ui->Display->selectionModel();

    // Obtener las filas seleccionadas
    QModelIndexList selectedRows = selectionModel->selectedRows();

    // Si se seleccionó al menos una fila
    if (!selectedRows.isEmpty()) {
        // Obtenemos el índice de la primera fila seleccionada
        int selectedRow = selectedRows.first().row();

        // Eliminar la persona de la lista
        // Primero obtenemos el iterador a la posicion a eliminar
        auto it = listaPersonas.begin();
        std::advance(it, selectedRow);
        // La eliminamos
        listaPersonas.erase(it);

        // Eliminar la fila de la tabla
        ui->Display->removeRow(selectedRow);
    } else {
        // Mostrar un mensaje de error indicando que no se ha seleccionado ninguna fila
        QMessageBox::warning(this, "Eliminar Persona", "Por Favor, seleccione una persona de la lista clickeando su número de fila.");
    }
}

// Cerramos la ventana cuando se clickee el boton de SALIR
void Widget::Salir_Clickeado(){
    this->close();
}
