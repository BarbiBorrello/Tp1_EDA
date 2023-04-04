/*Ejercicio 10: Escriba un programa que lea de la entrada estándar el nombre de una persona en un 
arreglo de caracteres. Además, pide el año de nacimiento, y determina su edad en años complidos.*/

# include<iostream>

using namespace std;

int main(){
	
	char nombre [20];
	int anio_nacimiento;
	
	cout <<"Ingrese su nombre :";
	cin >>nombre;
	
	cout<<"Ingrese su anio de nacimiento : ";
	cin>>anio_nacimiento;
	
	cout<<"Su edad es : "<< 2023- anio_nacimiento <<" "<<"anios";
	
	return 0;
}