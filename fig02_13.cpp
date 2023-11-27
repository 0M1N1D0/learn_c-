// Fig. 2.13: fig02_13.cpp
// Comparación de enteros mediante instrucciones if, operadores
// relacionales y operadores de igualdad.

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int num1 = 0;
    int num2 = 0;

    cout << "Escriba dos numeros a comparar: ";
    cin >> num1 >> num2;

    if (num1 == num2)
        cout << num1 << " == " << num2 << endl;
    if (num1 != num2)
        cout << num1 << " != " << num2 << endl;
    if (num1 < num2)
        cout << num1 << " < " << num2 << endl;
    if (num1 > num2)
        cout << num1 << " > " << num2 << endl;
    if (num1 <= num2)
        cout << num1 << " <= " << num2 << endl;
    if (num1 >= num2)
        cout << num1 << " >= " << num2 << endl;
}