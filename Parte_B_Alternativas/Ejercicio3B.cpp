/*Ejercicios 3: Realice un programa que calcule y muestre en la salida estándar, la suma de los cuadrados 
de los 10 primeros enteros mayores que cero. Mostrar un mensaje de invalidez, si ingresa un negativo.*/

# include <iostream>
using namespace std;

int main (){
	
	int n;


	
    for(int i =0; i<=10;i++){
		
		cout <<"Ingrese un numero del 1 al 10 : ";
		cin >> n;

		cout<<"La suma del cuadrado es : " << (n*n) + (n*n)<< endl;

		 }	
		 
		 if ((n < 0) || (n  > 10)){
		 	
		cout <<"INVALIDO!! El numero ingresado es negativo";
		 } 	
	
	return 0;
		
	
}
