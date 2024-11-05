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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *BotonAgregarLuchador;
    QPushButton *BotonBatalla;
    QTextEdit *MostrarBatalla;
    QComboBox *SeleccionarLuchador1;
    QLabel *titulo;
    QComboBox *SeleccionarLuchador2;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(598, 477);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 20, 561, 441));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        BotonAgregarLuchador = new QPushButton(gridLayoutWidget);
        BotonAgregarLuchador->setObjectName("BotonAgregarLuchador");

        gridLayout->addWidget(BotonAgregarLuchador, 7, 3, 1, 1);

        BotonBatalla = new QPushButton(gridLayoutWidget);
        BotonBatalla->setObjectName("BotonBatalla");

        gridLayout->addWidget(BotonBatalla, 6, 0, 1, 4);

        MostrarBatalla = new QTextEdit(gridLayoutWidget);
        MostrarBatalla->setObjectName("MostrarBatalla");

        gridLayout->addWidget(MostrarBatalla, 1, 0, 1, 4);

        SeleccionarLuchador1 = new QComboBox(gridLayoutWidget);
        SeleccionarLuchador1->setObjectName("SeleccionarLuchador1");

        gridLayout->addWidget(SeleccionarLuchador1, 3, 0, 1, 2);

        titulo = new QLabel(gridLayoutWidget);
        titulo->setObjectName("titulo");
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        titulo->setFont(font);
        titulo->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(titulo, 0, 0, 1, 4);

        SeleccionarLuchador2 = new QComboBox(gridLayoutWidget);
        SeleccionarLuchador2->setObjectName("SeleccionarLuchador2");

        gridLayout->addWidget(SeleccionarLuchador2, 3, 2, 1, 2);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");
        QFont font1;
        font1.setPointSize(12);
        font1.setBold(true);
        label->setFont(font1);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label, 2, 0, 1, 2);

        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);

        gridLayout->addWidget(label_2, 2, 2, 1, 2);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        BotonAgregarLuchador->setText(QCoreApplication::translate("Widget", "Agregar Luchador", nullptr));
        BotonBatalla->setText(QCoreApplication::translate("Widget", "Iniciar Batalla", nullptr));
        titulo->setText(QCoreApplication::translate("Widget", "Programa de Batallas!", nullptr));
        label->setText(QCoreApplication::translate("Widget", "Luchador 1", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "Luchador 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
