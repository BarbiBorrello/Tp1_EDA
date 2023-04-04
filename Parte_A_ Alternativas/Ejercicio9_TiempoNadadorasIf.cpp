/*Ejercicio 9: Escriba un programa que ingrese nombre y tiempo de nado de dos nadadoras. Luego
determine y muestre cuál de ellas llego primero.*/

# include<iostream>
using namespace std;

int main(){
	
	string nombre1,nombre2;

	float tiempo1,tiempo2;
	
	cout<<"Ingrese el nombre 1 : ";
	cin>>nombre1;

	cout<<"Ingrese el nombre 2 : ";
	cin>>nombre2;
	
	cout << "Ingrese tiempo 1: ";
    cin >> tiempo1;
    cout << "Ingrese tiempo 2: ";
    cin >> tiempo2;
	
	if(tiempo1<tiempo2){
		cout<<"Llego primero : "<<nombre1;
	} else {
		cout<<"Llego primero : "<<nombre2;
	}	
	return 0;
}