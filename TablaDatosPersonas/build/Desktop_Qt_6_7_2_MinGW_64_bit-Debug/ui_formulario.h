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
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formulario
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QPushButton *BotonCancel;
    QLabel *label_5;
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_6;
    QPlainTextEdit *TextObservaciones;
    QPushButton *BotonOk;
    QLineEdit *lineEdit_DNI;
    QLineEdit *lineEdit_Nombre;
    QLineEdit *lineEdit_Apellido;
    QSpinBox *spinBox_Edad;
    QDoubleSpinBox *doubleSpinBox_Peso;
    QDoubleSpinBox *doubleSpinBox_Altura;
    QLabel *label_7;

    void setupUi(QWidget *Formulario)
    {
        if (Formulario->objectName().isEmpty())
            Formulario->setObjectName("Formulario");
        Formulario->resize(523, 437);
        gridLayoutWidget = new QWidget(Formulario);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(40, 40, 441, 351));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        BotonCancel = new QPushButton(gridLayoutWidget);
        BotonCancel->setObjectName("BotonCancel");
        BotonCancel->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(BotonCancel, 9, 4, 1, 1);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 4, 0, 1, 1);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName("label_6");

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        TextObservaciones = new QPlainTextEdit(gridLayoutWidget);
        TextObservaciones->setObjectName("TextObservaciones");
        TextObservaciones->setStyleSheet(QString::fromUtf8(""));

        gridLayout->addWidget(TextObservaciones, 8, 0, 1, 5);

        BotonOk = new QPushButton(gridLayoutWidget);
        BotonOk->setObjectName("BotonOk");
        BotonOk->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(BotonOk, 9, 3, 1, 1);

        lineEdit_DNI = new QLineEdit(gridLayoutWidget);
        lineEdit_DNI->setObjectName("lineEdit_DNI");

        gridLayout->addWidget(lineEdit_DNI, 3, 1, 1, 4);

        lineEdit_Nombre = new QLineEdit(gridLayoutWidget);
        lineEdit_Nombre->setObjectName("lineEdit_Nombre");

        gridLayout->addWidget(lineEdit_Nombre, 2, 1, 1, 4);

        lineEdit_Apellido = new QLineEdit(gridLayoutWidget);
        lineEdit_Apellido->setObjectName("lineEdit_Apellido");

        gridLayout->addWidget(lineEdit_Apellido, 0, 1, 1, 4);

        spinBox_Edad = new QSpinBox(gridLayoutWidget);
        spinBox_Edad->setObjectName("spinBox_Edad");

        gridLayout->addWidget(spinBox_Edad, 4, 1, 1, 4);

        doubleSpinBox_Peso = new QDoubleSpinBox(gridLayoutWidget);
        doubleSpinBox_Peso->setObjectName("doubleSpinBox_Peso");

        gridLayout->addWidget(doubleSpinBox_Peso, 5, 1, 1, 4);

        doubleSpinBox_Altura = new QDoubleSpinBox(gridLayoutWidget);
        doubleSpinBox_Altura->setObjectName("doubleSpinBox_Altura");

        gridLayout->addWidget(doubleSpinBox_Altura, 6, 1, 1, 4);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName("label_7");

        gridLayout->addWidget(label_7, 7, 0, 1, 5);


        retranslateUi(Formulario);

        QMetaObject::connectSlotsByName(Formulario);
    } // setupUi

    void retranslateUi(QWidget *Formulario)
    {
        Formulario->setWindowTitle(QCoreApplication::translate("Formulario", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Formulario", "Nombre:", nullptr));
        label->setText(QCoreApplication::translate("Formulario", "Apellido:", nullptr));
        BotonCancel->setText(QCoreApplication::translate("Formulario", "Cancel", nullptr));
        label_5->setText(QCoreApplication::translate("Formulario", "Altura:", nullptr));
        label_4->setText(QCoreApplication::translate("Formulario", "Edad:", nullptr));
        label_3->setText(QCoreApplication::translate("Formulario", "DNI:", nullptr));
        label_6->setText(QCoreApplication::translate("Formulario", "Peso:", nullptr));
        BotonOk->setText(QCoreApplication::translate("Formulario", "Ok", nullptr));
        label_7->setText(QCoreApplication::translate("Formulario", "Observaciones", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Formulario: public Ui_Formulario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMULARIO_H
