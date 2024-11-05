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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(608, 498);
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(200, 130, 171, 221));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(verticalLayoutWidget);
        pushButton->setObjectName("pushButton");
        QFont font;
        font.setPointSize(12);
        font.setBold(false);
        pushButton->setFont(font);
        pushButton->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(verticalLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");
        QFont font1;
        font1.setPointSize(12);
        pushButton_2->setFont(font1);
        pushButton_2->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(verticalLayoutWidget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setFont(font1);
        pushButton_3->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        verticalLayout->addWidget(pushButton_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "Color1", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Widget", "Color2", nullptr));
        pushButton_3->setText(QCoreApplication::translate("Widget", "Color3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
