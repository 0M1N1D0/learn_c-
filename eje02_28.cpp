/*
(Dígitos de un entero) Escriba un programa que reciba como entrada un entero de cinco dígitos, que separe
ese número en sus dígitos individuales y los imprima, cada uno separado de los demás por tres espacios. [Sugerencia:
use los operadores de división entera y módulo]. Por ejemplo, si el usuario escribe el número 42339, el
programa debe imprimir: 4   2   3   3   9
*/

#include <iostream>

using namespace std;

int main()
{
    int numero = 0;
    int digito1 = 0;
    int digito2 = 0;
    int digito3 = 0;
    int digito4 = 0;
    int digito5 = 0;
    int residuo = 0;

    cout << "Ingrese un entero de cinco digitos: ";
    cin >> numero;

    digito1 = numero / 10000;
    residuo = numero % 10000;
    digito2 = residuo / 1000;
    residuo = residuo % 1000;
    digito3 = residuo / 100;
    residuo = residuo % 100;
    digito4 = residuo / 10;
    residuo = residuo % 10;
    digito5 = residuo;
    

    cout << digito1 << "   " << digito2 << "   " << digito3 << "   " << digito4 << "   " << digito5;

}