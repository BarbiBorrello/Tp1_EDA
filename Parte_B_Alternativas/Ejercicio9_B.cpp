/*
 * Ejercicio 9: Escriba un programa que calcule el valor de: 1*2*3*...*n (factorial)
 */


#include <iostream>
using namespace std;

int main() {

    int n;
    cout << "Ingrese un numero: ";
	cin >> n;
    int factorial = 1;
    for (int i = 1; i <= n; i++) {
        factorial *= i;
    }
    cout << "El factorial de " << n << " es: " << factorial <<endl;


    return 0;
}

