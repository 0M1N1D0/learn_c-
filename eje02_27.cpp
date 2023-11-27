/*
Escriba un programa que imprima el equivalente entero de un carácter escrito en el teclado.
Almacene la entrada en una variable de tipo char. Pruebe su programa varias veces utilizando letras mayúsculas,
minúsculas, dígitos y caracteres especiales (como $).
*/

#include <iostream>

int main()
{
    char caracter;

    std::cout << "Escriba el caracter: ";
    std::cin >> caracter;

    std::cout << "El equivalente entero del caracter " << caracter << " es: " << static_cast<int>(caracter) << std::endl;

}