// Fig. 3.5: fig03_05.cpp
// Define la clase LibroCalificaciones que contiene un miembro de datos
// nombreCurso y funciones miembro para establecer y obtener su valor;
// Crea y manipula un objeto LibroCalificaciones con estas funciones.

#include <iostream>
#include <string>

using namespace std;

// definición de la clase LibroCalificaciones
class LibroCalificaciones
{
    private:
    string nombreCurso;

    public:
    void establecerNombreCurso(string nombre)
    {
        nombreCurso = nombre;
    }

    string obtenerNombreCurso() const
    {
        return nombreCurso;
    }

    void mostrarMensaje() const
    {
        cout << "Bienvenido al libro de calificaciones para\n"
            << obtenerNombreCurso() << "!" << endl;
    }

};

int main()
{
    string nombreDelCurso;
    LibroCalificaciones miLibroCalificaciones;

    cout << "El nombre inicial del curso es: " << miLibroCalificaciones.obtenerNombreCurso() << endl;

    cout << "\nEscriba el nombre del curso: ";
    getline(cin, nombreDelCurso);

    miLibroCalificaciones.establecerNombreCurso(nombreDelCurso);

    cout << endl;
    miLibroCalificaciones.mostrarMensaje();
}