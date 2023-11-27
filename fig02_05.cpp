// Fig. 2.5: fig02_05.cpp
// Programa que muestra la suma de dos enteros.

#include <iostream>

int main()
{
    int nummero1 = 0;
    int numero2 = 0;
    int suma = 0;

    std::cout << "Escriba el primer numero: ";
    std::cin >> nummero1;

    std::cout << "Escriba el segundo numero: ";
    std::cin >> numero2;

    suma = nummero1 + numero2;

    std::cout << "La suma es :" << suma << std::endl;
}