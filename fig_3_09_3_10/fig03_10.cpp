// Fig. 3.10: fig03_10.cpp
// Inclusión de la clase LibroCalificaciones del archivo LibroCalificaciones.h
// para usarla en main.

#include <iostream>
#include "LibroCalificaciones.h"

using namespace std;

int main()
{
    LibroCalificaciones libro1("Historia");
    LibroCalificaciones libro2("Geografía");

    cout << "libro1: " << libro1.obtenerNombreCurso() << endl;
    cout << "libro2: " << libro2.obtenerNombreCurso() << endl;

    cout << endl;
}