#include "widget.h"
#include "ui_widget.h"

#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    // Boton C para limpiar entrada
    connect(ui->BorrarC, &QPushButton::clicked, this, &Widget::BorrarC_clickeado);
    // Botones Numericos
    connect(ui->Num0, &QPushButton::clicked, this, &Widget::Numero_Clickeado);
    connect(ui->Num1, &QPushButton::clicked, this, &Widget::Numero_Clickeado);
    connect(ui->Num2, &QPushButton::clicked, this, &Widget::Numero_Clickeado);
    connect(ui->Num3, &QPushButton::clicked, this, &Widget::Numero_Clickeado);
    connect(ui->Num4, &QPushButton::clicked, this, &Widget::Numero_Clickeado);
    connect(ui->Num5, &QPushButton::clicked, this, &Widget::Numero_Clickeado);
    connect(ui->Num6, &QPushButton::clicked, this, &Widget::Numero_Clickeado);
    connect(ui->Num7, &QPushButton::clicked, this, &Widget::Numero_Clickeado);
    connect(ui->Num8, &QPushButton::clicked, this, &Widget::Numero_Clickeado);
    connect(ui->Num9, &QPushButton::clicked, this, &Widget::Numero_Clickeado);
    // Operaciones
    connect(ui->Suma, &QPushButton::clicked, this, &Widget::Operacion_Clickeada);
    connect(ui->Resta, &QPushButton::clicked, this, &Widget::Operacion_Clickeada);
    connect(ui->Multiplicar, &QPushButton::clicked, this, &Widget::Operacion_Clickeada);
    connect(ui->Dividir, &QPushButton::clicked, this, &Widget::Operacion_Clickeada);
    // Resultado
    connect(ui->Igual, &QPushButton::clicked, this, &Widget::Igual_Clickeado);
    // Boton Cambiar Signo
    connect(ui->CambiarSigno, &QPushButton::clicked, this, &Widget::CambiarSigno);
    // Porcentaje
    connect(ui->Porcentaje, &QPushButton::clicked, this, &Widget::Porcentaje_Clickeado);
    // Parentesis
    connect(ui->Parentesis, &QPushButton::clicked, this, &Widget::Parentesis_Clickeado);
}

Widget::~Widget()
{
    delete ui;
}

// Limpiar entrada de valor
void Widget::BorrarC_clickeado()
{
    // Restablecemos las variables
    EntradaUsuario = "";
    OperacionUsuario = "";
    ValorAlmacenado = 0;
    // Reiniciamos el display
    ui->Display->setText("0");
}

// Botones Numericos
void Widget::Numero_Clickeado(){
    // Obtenemos que boton fue clickeado
    QPushButton *BotonClick = qobject_cast<QPushButton*>(sender());
    if (BotonClick)
    {
        // Almacenamos lo que hace el boton en una nueva variable tipo QString
        QString BotonValor = BotonClick->text();
        // Lo concatenamos a la entrada actual del usuario
        EntradaUsuario += BotonValor;
        // Lo mostramos en la interfaz
        ui->Display->setText(EntradaUsuario);
    }

}

// Operaciones (suma, resta, multiplicacion, division)
void Widget::Operacion_Clickeada(){
    QPushButton *BotonClick = qobject_cast<QPushButton*>(sender());
    if (BotonClick)
    {
        // Convertimos el numero ingresado a tipo double y lo almacenamos en nuestra variable
        ValorAlmacenado = EntradaUsuario.toDouble();
        // Restablecemos el display
        EntradaUsuario = "";
        // Guardamos el operador seleccionado en nuestra variable
        OperacionUsuario = BotonClick->text();
    }
}

// Resultado de una operacion (cuando se clickea el igual)
void Widget::Igual_Clickeado(){
    // Guardamos el segundo numero (el primero ya lo tenemos en ValorAlmacenado)
    double ValorAlmacenado2 = EntradaUsuario.toDouble();
    // Verificamos que operacion fue eligida y la realizamos con los valores almacenados
    if (OperacionUsuario == "+"){
        ValorAlmacenado += ValorAlmacenado2;
    }
    else if (OperacionUsuario == "-") {
        ValorAlmacenado -= ValorAlmacenado2;
    }
    else if (OperacionUsuario == "x") {
        ValorAlmacenado *= ValorAlmacenado2;
    }
    else if (OperacionUsuario == "÷") {
        if (ValorAlmacenado2 != 0) {
            ValorAlmacenado /= ValorAlmacenado2;
        } else {
            // Mostramos un mensaje de error, informando que no es posible dividir por 0
            QMessageBox::critical(nullptr ,"Error", "No se puede dividir por 0.");
        }
    }
    // Mostramos el resultado de la operacion en el display
    ui->Display->setText(QString::number(ValorAlmacenado));
    // Limpiamos operador y guardamos el resultado de la operacion en la entrada
    EntradaUsuario = QString::number(ValorAlmacenado);
    OperacionUsuario = "";
}

void Widget::CambiarSigno(){
    // Convertimos a tipo double el numero ingresado para poder comparar
    ValorAlmacenado = EntradaUsuario.toDouble();
    // Verificamos que el numero al que deseamos cambiar el signo no sea 0
    if (ValorAlmacenado == 0) {
        // Mostramos un mensaje de error, informando que no podemos cambiar el signo a 0
        QMessageBox::critical(nullptr ,"Error", "No se puede cambiar el signo de 0.");
    } else {
        // Hacemos otra condicion para verificar si el numero al que deseamos cambiar signo es positivo o negativo
        // Si el numero es negativo
        if (ValorAlmacenado < 0) {
            // Le restamos el doble para convertirlo en positivo (menos por menos, es mas)
            ValorAlmacenado -= (ValorAlmacenado*2);
        } else {
            // Le restamos el doble para convertirlo en negativo
            ValorAlmacenado -= (ValorAlmacenado*2);
        }
    }
    // Mostramos el resultado de la operacion en el display
    ui->Display->setText(QString::number(ValorAlmacenado));
    // Guardamos el resultado de la operacion en la entrada
    EntradaUsuario = QString::number(ValorAlmacenado);
}

void Widget::Porcentaje_Clickeado(){
    // Convertimos el porcentaje a decimal
    ValorAlmacenado = EntradaUsuario.toDouble() / 100;
    // Mostramos el resultado de la operacion en el display
    ui->Display->setText(QString::number(ValorAlmacenado));
    // Guardamos el resultado de la operacion en la entrada
    EntradaUsuario = QString::number(ValorAlmacenado);
}

