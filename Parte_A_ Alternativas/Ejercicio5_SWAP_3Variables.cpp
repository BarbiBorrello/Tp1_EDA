/*Ejercicio 5: Escriba un fragmento de programa que intercambie (swap) los valores de 3 variables.*/

# include <iostream>

using namespace std;

int main(){
	
	int auxiliar,v1,v2,v3;
	
	cout<< " Ingresar variable 1: ";
	cin >> v1;
	cout<< " Ingresar variable 2: ";
	cin >> v2;
	cout<< " Ingresar variable 3: ";
	cin >> v3;
	
	cout << " "<< endl;
	
	cout << " Intercambiando valores...."<< endl;
	
	cout << " "<< endl;
	
	auxiliar = v3;
    v3 = v2;
    v2 = v1;
    v1 = auxiliar;
    
    cout <<" Ahora el valor de la variable 1 es " << v1 << endl;
    cout <<" Ahora el valor de la variable 2 es " << v2 << endl;
    cout <<" Ahora el valor de la variable 3 es " << v3 << endl;
	
    return 0;
}