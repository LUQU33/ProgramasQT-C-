/********************************************************************************
** Form generated from reading UI file 'ventanasecundaria.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANASECUNDARIA_H
#define UI_VENTANASECUNDARIA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VentanaSecundaria
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *Titulo;
    QLineEdit *Numero;
    QPushButton *Buscar;
    QLabel *Ubicacion;
    QLabel *CantVeces;
    QLabel *Error;

    void setupUi(QWidget *VentanaSecundaria)
    {
        if (VentanaSecundaria->objectName().isEmpty())
            VentanaSecundaria->setObjectName("VentanaSecundaria");
        VentanaSecundaria->resize(501, 422);
        gridLayoutWidget = new QWidget(VentanaSecundaria);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(90, 80, 321, 261));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Titulo = new QLabel(gridLayoutWidget);
        Titulo->setObjectName("Titulo");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setBold(true);
        Titulo->setFont(font);
        Titulo->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(Titulo, 0, 0, 1, 1);

        Numero = new QLineEdit(gridLayoutWidget);
        Numero->setObjectName("Numero");

        gridLayout->addWidget(Numero, 1, 0, 1, 1);

        Buscar = new QPushButton(gridLayoutWidget);
        Buscar->setObjectName("Buscar");
        Buscar->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Buscar, 2, 0, 1, 1);

        Ubicacion = new QLabel(gridLayoutWidget);
        Ubicacion->setObjectName("Ubicacion");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(11);
        font1.setBold(true);
        Ubicacion->setFont(font1);

        gridLayout->addWidget(Ubicacion, 4, 0, 1, 1);

        CantVeces = new QLabel(gridLayoutWidget);
        CantVeces->setObjectName("CantVeces");
        CantVeces->setFont(font1);

        gridLayout->addWidget(CantVeces, 3, 0, 1, 1);

        Error = new QLabel(gridLayoutWidget);
        Error->setObjectName("Error");
        Error->setFont(font1);

        gridLayout->addWidget(Error, 5, 0, 1, 1);


        retranslateUi(VentanaSecundaria);

        QMetaObject::connectSlotsByName(VentanaSecundaria);
    } // setupUi

    void retranslateUi(QWidget *VentanaSecundaria)
    {
        VentanaSecundaria->setWindowTitle(QCoreApplication::translate("VentanaSecundaria", "Form", nullptr));
        Titulo->setText(QCoreApplication::translate("VentanaSecundaria", "B\303\272squeda en el Deque", nullptr));
        Buscar->setText(QCoreApplication::translate("VentanaSecundaria", "Buscar", nullptr));
        Ubicacion->setText(QCoreApplication::translate("VentanaSecundaria", "Ubicaci\303\263n:", nullptr));
        CantVeces->setText(QCoreApplication::translate("VentanaSecundaria", "Cantidad de veces:", nullptr));
        Error->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class VentanaSecundaria: public Ui_VentanaSecundaria {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANASECUNDARIA_H
