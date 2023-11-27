// Fig. 3.3: fig03_03.cpp
// Define la clase LibroCalificaciones con una función miembro que recibe unparámetro,
// crea un objeto LibroCalificaciones y llama a su función mostrarMensaje.

#include <iostream>
#include <string>

using namespace std;

// definicion de la clase 
class LibroCalificciones
{
    public:
    void mostrarMensaje(string nombreCurso) const
    {
        cout << "Bienvenido al libro de calificaciones para\n" << nombreCurso << "!"
            << endl;
    }
};

// funcion principal 
int main()
{
    string nombreDelCurso;
    LibroCalificciones miLibroCalificaciones;

    cout << "Escriba el nombre del curso: " << endl;
    getline(cin, nombreDelCurso);
    cout << endl;

    miLibroCalificaciones.mostrarMensaje(nombreDelCurso);
}