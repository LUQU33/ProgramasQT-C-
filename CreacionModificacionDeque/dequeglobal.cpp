#include "dequeglobal.h"
#include <deque>
#include <QMessageBox>

using namespace std;

// Creamos el deque como vacio
deque<float> DequeGlobal::contenedor = {};

// Detallamos lo que hara nuestra funcion Validacion
bool DequeGlobal::Validacion(float numero){
    // Si el numero no es positivo
    if (numero <= 0) {
        // Muestra un QMessageBox de error y retorna falso
        QMessageBox::critical(nullptr ,"Error", "Ingrese un numero positivo.");
        return false;
    } else {
        // El numero es positivo, retorna true
        return true;
    }
};
