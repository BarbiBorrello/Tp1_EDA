/*Ejercicio 2: Realice un programa que lea de la entrada estándar números hasta que se introduzca un 
cero. En ese momento el programa debe terminar y mostrar en la salida estándar el número de valores 
leídos mayores que cero. Usar una estructura do-while.*/

#include <iostream>
using namespace std;

int main(){
		
	
	int n;
    int contador = 0;
    
    cout << "CONTANDO NUMEROS MAYORES QUE 0" <<endl;
    cout <<endl;
    
    cout << "Introduzca un numero: ";
    cin >> n;

    
    do{
    	contador++;
    	cout << "Introduzca un numero: ";
        cin >> n;
	}while (n != 0);
        
    
    cout << "La cantidad de numeros ingresados mayores a cero son: " << contador << std::endl;
	
	
	return 0;
}