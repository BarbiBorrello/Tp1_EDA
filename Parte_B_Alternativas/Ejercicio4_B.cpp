/*Ejercicio 4: Escriba un programa que tome cada 4 horas la temperatura exterior, leyéndola durante un 
período de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la 
temperatura más alta y la más baja*/


#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	float temp, max, min;
    float suma=0;
    
    cout << "Ingrese la temperatura: ";
    cin >> temp;
    suma=suma+temp;
    
    max = temp;
    min = temp;
    
    for (int i=6;i>0;i--) {
    	
        cout << "Ingrese la temperatura: ";
        cin >> temp;
        suma += temp;
        
        if (temp > max) {
            max = temp;
        }
        if (temp < min) {
            min = temp;
        }
    }
    
    cout << "La temperatura maxima es: " << max << std::endl;
    cout << "La temperatura minima es: " << min << std::endl;


return 0;

}