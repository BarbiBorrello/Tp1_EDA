/*Ejercicio 12: Hacer un programa que calcule el resultado de la siguiente expresión: 1-2+3-4+5-6...n*/

#include <iostream>
#include <valarray>

using namespace std;

int main() {

    int n;
    
    cout << "Ingrese el valor de n: ";
    cin >> n;
    
    int resultado = 0;
    
    for (int i = 1; i <= n; i++) {
    	
        if (i % 2 == 0) {
            resultado -= i;
        } else {
            resultado += i;
        }
    }
    cout << "El resultado es: " << resultado << endl;


    return 0;
}
