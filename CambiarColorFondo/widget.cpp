#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);


    // Signals & Slots
    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::on_pushButton_clickeado);
    connect(ui->pushButton_2, &QPushButton::clicked, this, &Widget::on_pushButton_2_clickeado);
    connect(ui->pushButton_3, &QPushButton::clicked, this, &Widget::on_pushButton_3_clickeado);

    // Dejamos de color base Negro los botones para que posteriormente se vean cuando cambiemos el fondo
    ui->pushButton->setStyleSheet("background-color: black");
    ui->pushButton_2->setStyleSheet("background-color: black");
    ui->pushButton_3->setStyleSheet("background-color: black");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clickeado()
{
    this->setStyleSheet("background-color: #E9967A");
}


void Widget::on_pushButton_2_clickeado()
{
    this->setStyleSheet("background-color: #B2FF9E");
}


void Widget::on_pushButton_3_clickeado()
{
    this->setStyleSheet("background-color: #DBFCFF");
}

