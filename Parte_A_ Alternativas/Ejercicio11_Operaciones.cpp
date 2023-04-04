/*Ejercicio 11: Escribe un programa que lea de la entrada estándar dos números y muestre en la salida 
estándar su suma, resta, multiplicación y división*/

#include<iostream>

using namespace std;

int main(){
	
	float n1,n2;
	
	cout <<"Ingrese un numero : ";
	cin >> n1;
	
	cout <<"Ingrese otro numero : ";
	cin >> n2;
	
	cout <<"Su suma es : " <<n1+n2<<endl;
	cout <<"Su resta es : " <<n1-n2<<endl;
	cout <<"Su multiplicacion es : " <<n1*n2<<endl;
	cout <<"Su divison es : " <<n1/n2<<endl;
	
	return 0;
}