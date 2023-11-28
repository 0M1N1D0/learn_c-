// Fig. 3.7: fig03_07.cpp
// Creación de instancias de varios objetos de la clase LibroCalificaciones y uso
// de su constructor para especificar el nombre del curso
// cuando se crea cada objeto LibroCalificaciones.

#include <iostream>
#include <string>

using namespace std;

// definición de la clase LibroCalificaciones
class LibroCalificaciones {

    private:
    string nombreCurso;

    public:
    explicit LibroCalificaciones(string nombre)
        : nombreCurso (nombre) {
            // cuerpo vacío
    }

    void establecerNombreCurso(string nombre) {
        nombreCurso = nombre;
    }

    string obtenerNombreCurso() const {
        return nombreCurso;
    }

    void mostrarMensaje() const {
        cout << "Bienvenido al libro calificaciones para: "
         << obtenerNombreCurso() << "!" << endl;
    }
};

int main() {
    LibroCalificaciones libro1("Introducción a la programación");
    LibroCalificaciones libro2("Estructuras de datos");

    cout << "libro1 se creó para: " << libro1.obtenerNombreCurso() << endl;
    cout << "libro2 se creó para: " << libro2.obtenerNombreCurso() << endl;

    cout << endl;
}