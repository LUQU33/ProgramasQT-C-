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
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton_BorrarElemento;
    QLabel *Resultado;
    QLineEdit *Numero;
    QLabel *Consigna_2;
    QPushButton *pushButton_AddFinal;
    QPushButton *pushButton_AddFrente;
    QLabel *Consigna;
    QPushButton *pushButton_MostrarDeque;
    QPushButton *pushButton_BuscarElemento;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(607, 515);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 70, 561, 381));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_BorrarElemento = new QPushButton(gridLayoutWidget);
        pushButton_BorrarElemento->setObjectName("pushButton_BorrarElemento");
        pushButton_BorrarElemento->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(pushButton_BorrarElemento, 3, 2, 1, 1);

        Resultado = new QLabel(gridLayoutWidget);
        Resultado->setObjectName("Resultado");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        Resultado->setFont(font);
        Resultado->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(Resultado, 5, 0, 1, 3);

        Numero = new QLineEdit(gridLayoutWidget);
        Numero->setObjectName("Numero");

        gridLayout->addWidget(Numero, 2, 0, 1, 3);

        Consigna_2 = new QLabel(gridLayoutWidget);
        Consigna_2->setObjectName("Consigna_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(18);
        font1.setBold(true);
        Consigna_2->setFont(font1);
        Consigna_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(Consigna_2, 0, 0, 1, 3);

        pushButton_AddFinal = new QPushButton(gridLayoutWidget);
        pushButton_AddFinal->setObjectName("pushButton_AddFinal");
        pushButton_AddFinal->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(pushButton_AddFinal, 3, 1, 1, 1);

        pushButton_AddFrente = new QPushButton(gridLayoutWidget);
        pushButton_AddFrente->setObjectName("pushButton_AddFrente");
        pushButton_AddFrente->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(pushButton_AddFrente, 3, 0, 1, 1);

        Consigna = new QLabel(gridLayoutWidget);
        Consigna->setObjectName("Consigna");
        Consigna->setFont(font);
        Consigna->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(Consigna, 1, 0, 1, 3);

        pushButton_MostrarDeque = new QPushButton(gridLayoutWidget);
        pushButton_MostrarDeque->setObjectName("pushButton_MostrarDeque");
        pushButton_MostrarDeque->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(pushButton_MostrarDeque, 4, 0, 1, 1);

        pushButton_BuscarElemento = new QPushButton(gridLayoutWidget);
        pushButton_BuscarElemento->setObjectName("pushButton_BuscarElemento");
        pushButton_BuscarElemento->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(pushButton_BuscarElemento, 4, 2, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton_BorrarElemento->setText(QCoreApplication::translate("Widget", "Eliminar\n"
"Elemento", nullptr));
        Resultado->setText(QCoreApplication::translate("Widget", "...", nullptr));
        Consigna_2->setText(QCoreApplication::translate("Widget", "Programa de creaci\303\263n y \n"
"modificaci\303\263n de Deque", nullptr));
        pushButton_AddFinal->setText(QCoreApplication::translate("Widget", "Agregar al \n"
"Final", nullptr));
        pushButton_AddFrente->setText(QCoreApplication::translate("Widget", "Agregar al \n"
"Frente", nullptr));
        Consigna->setText(QCoreApplication::translate("Widget", "Ingresar un n\303\272mero", nullptr));
        pushButton_MostrarDeque->setText(QCoreApplication::translate("Widget", "Mostrar \n"
"Deque", nullptr));
        pushButton_BuscarElemento->setText(QCoreApplication::translate("Widget", "Buscar \n"
"Elemento", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
