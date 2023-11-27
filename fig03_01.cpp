// Fig. 3.1: fig03_01.cpp
// Define la clase LibroCalificaciones con una función miembro llamadamostrarMensaje
// crea un objeto LibroCalificaciones y llama a su función mostrarMensaje.

#include <iostream>

using namespace std;

// definicion de la clase
class LibroCalificaciones
{
    public:
    void mostrarMensaje() const
    {
        cout << "Bienvenido al libro de calificaciones" << endl;
    }
};


// funcion principal
int main()
{
    LibroCalificaciones miLibroCalificaciones; 
    miLibroCalificaciones.mostrarMensaje();
}