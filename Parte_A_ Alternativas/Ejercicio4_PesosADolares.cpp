/*
Ejercicio 4: Haga un programa que tenga como entrada una cantidad de dinero en pesos argentinos,
y su salida será el monto convertido a dólares. Tome la cotización actual de dólar blue, redondear a
2 cifras.

*/


# include <iostream>
 using namespace std;
 
 int main (){
 	
    double pesos;
 	cout.precision(2);
 	
 	cout << "Ingrese pesos argentinos :";
 	cin >> pesos;
 
 	
 	cout << "Su conversion a dolares es :" << pesos*389 <<" "<< "pesos";
 	
 	
 	return 0;
 }