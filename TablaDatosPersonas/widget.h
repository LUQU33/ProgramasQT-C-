#ifndef WIDGET_H
#define WIDGET_H

#include "datospersona.h"
#include <QWidget>
#include <list>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void VentanaFormulario();
    void AgregarPersona(DatosPersona);
    void EliminarPersona();
    void Salir_Clickeado();
private:
    Ui::Widget *ui;
    // Lista para almacenar los datos en Widget
    std::list<DatosPersona> listaPersonas;
};
#endif // WIDGET_H
