#ifndef FORMULARIO_H
#define FORMULARIO_H
#include "datospersona.h"
#include <QDialog>
#include <list>

namespace Ui {
class Formulario;
}

class Formulario : public QDialog
{
    Q_OBJECT

public:
    explicit Formulario(QDialog *parent = nullptr);
    ~Formulario();

private slots:
    void Enviar();
    void Cerrar();

private:
    Ui::Formulario *ui;
    // Creamos la lista de objeto
    std::list<DatosPersona> Personas;

signals:
    // Declaramos una señal que se emitira cuando se añada un nuevo elemento a la lista
    void nuevaPersonaAgregada(DatosPersona persona);
};

#endif // FORMULARIO_H
