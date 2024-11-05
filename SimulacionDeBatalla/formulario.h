#ifndef FORMULARIO_H
#define FORMULARIO_H

#include "luchadores.h"

#include <QDialog>

namespace Ui {
class Formulario;
}

class Formulario : public QDialog
{
    Q_OBJECT

public:
    explicit Formulario(QDialog *parent = nullptr);
    ~Formulario();
    // Creamos una lista para los luchadores
    static std::list<Luchadores> ListaLuchadores;
private slots:
    void EnviarLuchador();
    void Cancelar();
private:
    Ui::Formulario *ui;
};

#endif // FORMULARIO_H
