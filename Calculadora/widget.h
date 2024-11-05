#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

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
    // Limpiar entrada
    void BorrarC_clickeado();
    // Botones numericos
    void Numero_Clickeado();
    // Operaciones
    void Operacion_Clickeada();
    // Resultado
    void Igual_Clickeado();
    // Cambiar signo
    void CambiarSigno();
    // Porcentaje
    void Porcentaje_Clickeado();

private:
    Ui::Widget *ui;
    QString EntradaUsuario; // QString que almacena la entrada del usuario
    QString OperacionUsuario; // QString que almacena la operacion que elige el usuario
    double ValorAlmacenado; // Valor que almacena el primer numero para realizar una operacion
};
#endif // WIDGET_H
