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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *Num8;
    QPushButton *Num1;
    QPushButton *Flotante;
    QPushButton *Num5;
    QPushButton *Parentesis;
    QPushButton *Num9;
    QPushButton *Num2;
    QPushButton *Suma;
    QPushButton *Num0;
    QPushButton *Num4;
    QPushButton *Num7;
    QPushButton *CambiarSigno;
    QPushButton *Dividir;
    QPushButton *BorrarC;
    QPushButton *Resta;
    QPushButton *Igual;
    QPushButton *Porcentaje;
    QPushButton *Num6;
    QPushButton *Multiplicar;
    QPushButton *Num3;
    QLabel *Display;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(393, 374);
        gridLayoutWidget = new QWidget(Widget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(20, 20, 351, 331));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        Num8 = new QPushButton(gridLayoutWidget);
        Num8->setObjectName("Num8");
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        Num8->setFont(font);
        Num8->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Num8, 3, 1, 1, 1);

        Num1 = new QPushButton(gridLayoutWidget);
        Num1->setObjectName("Num1");
        Num1->setFont(font);
        Num1->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Num1, 5, 0, 1, 1);

        Flotante = new QPushButton(gridLayoutWidget);
        Flotante->setObjectName("Flotante");
        Flotante->setFont(font);
        Flotante->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Flotante, 6, 2, 1, 1);

        Num5 = new QPushButton(gridLayoutWidget);
        Num5->setObjectName("Num5");
        Num5->setFont(font);
        Num5->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Num5, 4, 1, 1, 1);

        Parentesis = new QPushButton(gridLayoutWidget);
        Parentesis->setObjectName("Parentesis");
        Parentesis->setFont(font);
        Parentesis->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Parentesis, 2, 1, 1, 1);

        Num9 = new QPushButton(gridLayoutWidget);
        Num9->setObjectName("Num9");
        Num9->setFont(font);
        Num9->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Num9, 3, 2, 1, 1);

        Num2 = new QPushButton(gridLayoutWidget);
        Num2->setObjectName("Num2");
        Num2->setFont(font);
        Num2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Num2, 5, 1, 1, 1);

        Suma = new QPushButton(gridLayoutWidget);
        Suma->setObjectName("Suma");
        Suma->setFont(font);
        Suma->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Suma, 5, 3, 1, 1);

        Num0 = new QPushButton(gridLayoutWidget);
        Num0->setObjectName("Num0");
        Num0->setFont(font);
        Num0->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Num0, 6, 1, 1, 1);

        Num4 = new QPushButton(gridLayoutWidget);
        Num4->setObjectName("Num4");
        Num4->setFont(font);
        Num4->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Num4, 4, 0, 1, 1);

        Num7 = new QPushButton(gridLayoutWidget);
        Num7->setObjectName("Num7");
        Num7->setFont(font);
        Num7->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Num7, 3, 0, 1, 1);

        CambiarSigno = new QPushButton(gridLayoutWidget);
        CambiarSigno->setObjectName("CambiarSigno");
        CambiarSigno->setFont(font);
        CambiarSigno->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(CambiarSigno, 6, 0, 1, 1);

        Dividir = new QPushButton(gridLayoutWidget);
        Dividir->setObjectName("Dividir");
        Dividir->setFont(font);
        Dividir->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Dividir, 2, 3, 1, 1);

        BorrarC = new QPushButton(gridLayoutWidget);
        BorrarC->setObjectName("BorrarC");
        BorrarC->setFont(font);
        BorrarC->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(BorrarC, 2, 0, 1, 1);

        Resta = new QPushButton(gridLayoutWidget);
        Resta->setObjectName("Resta");
        Resta->setFont(font);
        Resta->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Resta, 4, 3, 1, 1);

        Igual = new QPushButton(gridLayoutWidget);
        Igual->setObjectName("Igual");
        Igual->setFont(font);
        Igual->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Igual, 6, 3, 1, 1);

        Porcentaje = new QPushButton(gridLayoutWidget);
        Porcentaje->setObjectName("Porcentaje");
        Porcentaje->setFont(font);
        Porcentaje->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Porcentaje, 2, 2, 1, 1);

        Num6 = new QPushButton(gridLayoutWidget);
        Num6->setObjectName("Num6");
        Num6->setFont(font);
        Num6->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Num6, 4, 2, 1, 1);

        Multiplicar = new QPushButton(gridLayoutWidget);
        Multiplicar->setObjectName("Multiplicar");
        Multiplicar->setFont(font);
        Multiplicar->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Multiplicar, 3, 3, 1, 1);

        Num3 = new QPushButton(gridLayoutWidget);
        Num3->setObjectName("Num3");
        Num3->setFont(font);
        Num3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        gridLayout->addWidget(Num3, 5, 2, 1, 1);

        Display = new QLabel(gridLayoutWidget);
        Display->setObjectName("Display");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(36);
        font1.setBold(true);
        Display->setFont(font1);
        Display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(Display, 1, 0, 1, 4);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        Num8->setText(QCoreApplication::translate("Widget", "8", nullptr));
        Num1->setText(QCoreApplication::translate("Widget", "1", nullptr));
        Flotante->setText(QCoreApplication::translate("Widget", ".", nullptr));
        Num5->setText(QCoreApplication::translate("Widget", "5", nullptr));
        Parentesis->setText(QCoreApplication::translate("Widget", "()", nullptr));
        Num9->setText(QCoreApplication::translate("Widget", "9", nullptr));
        Num2->setText(QCoreApplication::translate("Widget", "2", nullptr));
        Suma->setText(QCoreApplication::translate("Widget", "+", nullptr));
        Num0->setText(QCoreApplication::translate("Widget", "0", nullptr));
        Num4->setText(QCoreApplication::translate("Widget", "4", nullptr));
        Num7->setText(QCoreApplication::translate("Widget", "7", nullptr));
        CambiarSigno->setText(QCoreApplication::translate("Widget", "+/-", nullptr));
        Dividir->setText(QCoreApplication::translate("Widget", "\303\267", nullptr));
        BorrarC->setText(QCoreApplication::translate("Widget", "C", nullptr));
        Resta->setText(QCoreApplication::translate("Widget", "-", nullptr));
        Igual->setText(QCoreApplication::translate("Widget", "=", nullptr));
        Porcentaje->setText(QCoreApplication::translate("Widget", "%", nullptr));
        Num6->setText(QCoreApplication::translate("Widget", "6", nullptr));
        Multiplicar->setText(QCoreApplication::translate("Widget", "x", nullptr));
        Num3->setText(QCoreApplication::translate("Widget", "3", nullptr));
        Display->setText(QCoreApplication::translate("Widget", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
