#ifndef DEQUEGLOBAL_H
#define DEQUEGLOBAL_H

#include <deque>

class DequeGlobal
{
public:
    // Deque estatico
    static std::deque<float> contenedor;

    // Funcion de validacion de datos
    static bool Validacion(float numero);
};

#endif // DEQUEGLOBAL_H
