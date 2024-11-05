#ifndef WIDGET_H
#define WIDGET_H

#include <deque>
#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui {class Widget;}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_AddFrente_clickeado();

    void on_pushButton_AddFinal_clickeado();

    void on_pushButton_BorrarElemento_clickeado();

    void on_pushButton_MostrarDeque_clickeado();

    void on_pushButton_BuscarElemento_clickeado();

private:
    Ui::Widget *ui;
    // Creamos el deque
    std::deque<float> contenedor = {};
};
#endif // WIDGET_H
