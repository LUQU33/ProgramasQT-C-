#ifndef VENTANASECUNDARIA_H
#define VENTANASECUNDARIA_H

#include <QDialog>

namespace Ui {
class VentanaSecundaria;
}

class VentanaSecundaria : public QDialog
{
    Q_OBJECT

public:
    explicit VentanaSecundaria(QDialog *parent = nullptr);
    ~VentanaSecundaria();

private slots:
    void on_Buscar_clickeado();

private:
    Ui::VentanaSecundaria *ui;
};

#endif // VENTANASECUNDARIA_H
