#ifndef DATOSPERSONA_H
#define DATOSPERSONA_H

#include <QString>

class DatosPersona
{
public:
    DatosPersona();
    QString Nombre;
    QString Apellido;
    int dni;
    int edad;
    QString peso;
    QString altura;
    QString Observaciones;
};

#endif // DATOSPERSONA_H
