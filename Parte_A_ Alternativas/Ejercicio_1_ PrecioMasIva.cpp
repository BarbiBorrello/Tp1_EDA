/*
Ejercicio 2: Escribe un programa que lea de la entrada estándar el precio de un producto y muestre
en la salida estándar, el precio del producto al aplicarle el IVA.
*/

# include <iostream>
using namespace std;

int main (){
	
	float precio;
	
	cout <<"Ingrese un precio:";
	cin >> precio;
    cout << "El precio mas Iva es:" << precio*1.21<<endl;

	
	return 0;
}