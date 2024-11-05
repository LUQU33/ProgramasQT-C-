/********************************************************************************
** Form generated from reading UI file 'formulario.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMULARIO_H
#define UI_FORMULARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formulario
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *titulo;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *NombreLuchador;
    QLabel *label_4;
    QPushButton *Agregar;
    QPushButton *BotonSalir;
    QLineEdit *VelocidadLuchador;
    QLineEdit *AtaqueLuchador;
    QLineEdit *DefensaLuchador;

    void setupUi(QWidget *Formulario)
    {
        if (Formulario->objectName().isEmpty())
            Formulario->setObjectName("Formulario");
        Formulario->resize(467, 407);
        gridLayoutWidget = new QWidget(Formulario);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(80, 70, 321, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        titulo = new QLabel(gridLayoutWidget);
        titulo->setObjectName("titulo");
        titulo->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(titulo, 0, 0, 1, 3);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 1, 0, 1, 1);

        NombreLuchador = new QLineEdit(gridLayoutWidget);
        NombreLuchador->setObjectName("NombreLuchador");

        gridLayout->addWidget(NombreLuchador, 1, 1, 1, 2);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        Agregar = new QPushButton(gridLayoutWidget);
        Agregar->setObjectName("Agregar");
        Agregar->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Agregar, 5, 0, 1, 3);

        BotonSalir = new QPushButton(gridLayoutWidget);
        BotonSalir->setObjectName("BotonSalir");

        gridLayout->addWidget(BotonSalir, 7, 2, 1, 1);

        VelocidadLuchador = new QLineEdit(gridLayoutWidget);
        VelocidadLuchador->setObjectName("VelocidadLuchador");

        gridLayout->addWidget(VelocidadLuchador, 2, 1, 1, 2);

        AtaqueLuchador = new QLineEdit(gridLayoutWidget);
        AtaqueLuchador->setObjectName("AtaqueLuchador");

        gridLayout->addWidget(AtaqueLuchador, 3, 1, 1, 2);

        DefensaLuchador = new QLineEdit(gridLayoutWidget);
        DefensaLuchador->setObjectName("DefensaLuchador");

        gridLayout->addWidget(DefensaLuchador, 4, 1, 1, 2);


        retranslateUi(Formulario);

        QMetaObject::connectSlotsByName(Formulario);
    } // setupUi

    void retranslateUi(QWidget *Formulario)
    {
        Formulario->setWindowTitle(QCoreApplication::translate("Formulario", "Form", nullptr));
        label_3->setText(QCoreApplication::translate("Formulario", "Ataque", nullptr));
        titulo->setText(QCoreApplication::translate("Formulario", "Ingrese los datos de su Luchador", nullptr));
        label_2->setText(QCoreApplication::translate("Formulario", "Velocidad", nullptr));
        label->setText(QCoreApplication::translate("Formulario", "Nombre", nullptr));
        label_4->setText(QCoreApplication::translate("Formulario", "Defensa", nullptr));
        Agregar->setText(QCoreApplication::translate("Formulario", "Agregar", nullptr));
        BotonSalir->setText(QCoreApplication::translate("Formulario", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Formulario: public Ui_Formulario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARIO_H
