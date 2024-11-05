/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Boton_AgregarPersona;
    QTableWidget *Display;
    QPushButton *Boton_EliminarPersona;
    QPushButton *Boton_Salir;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(763, 613);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(30, 20, 701, 571));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Boton_AgregarPersona = new QPushButton(gridLayoutWidget);
        Boton_AgregarPersona->setObjectName("Boton_AgregarPersona");
        Boton_AgregarPersona->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Boton_AgregarPersona, 1, 0, 1, 1);

        Display = new QTableWidget(gridLayoutWidget);
        Display->setObjectName("Display");

        gridLayout->addWidget(Display, 0, 0, 1, 3);

        Boton_EliminarPersona = new QPushButton(gridLayoutWidget);
        Boton_EliminarPersona->setObjectName("Boton_EliminarPersona");
        Boton_EliminarPersona->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Boton_EliminarPersona, 1, 1, 1, 1);

        Boton_Salir = new QPushButton(gridLayoutWidget);
        Boton_Salir->setObjectName("Boton_Salir");
        Boton_Salir->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Boton_Salir, 1, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        Boton_AgregarPersona->setText(QCoreApplication::translate("Widget", "Agregar Persona", nullptr));
        Boton_EliminarPersona->setText(QCoreApplication::translate("Widget", "Eliminar Persona", nullptr));
        Boton_Salir->setText(QCoreApplication::translate("Widget", "SALIR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
