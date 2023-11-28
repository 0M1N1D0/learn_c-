// Fig. 3.9: LibroCalificaciones.h
// Definición de la clase LibroCalificaciones en un archivo separado de main.

#include <iostream>
#include <string>


class LibroCalificaciones 
{

    public:
    explicit LibroCalificaciones(std::string nombre)
        : nombreCurso (nombre)
    {
        // cuerpo del contructor vacío 
    }

    void establecerNombreCurso(std::string nombre)
    {
        nombreCurso = nombre;
    }

    std::string obtenerNombreCurso() const 
    {
        return nombreCurso;
    }

    void mostrarMensaje() const 
    {
        std::cout << "Bienvenido al libro para: "
            << obtenerNombreCurso() << "!" << std::endl;
    }

    private:
    std::string nombreCurso;
};