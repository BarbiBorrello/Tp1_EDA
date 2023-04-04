/*Ejercicio 8: La calificación final de un estudiante es la media ponderada de tres notas: la nota de 
prácticas que cuenta un 30% del total, la nota teórica que cuenta un 60% y la nota de participación 
que cuenta el 10% restante. Escriba un programa que lea de la entrada estándar las tres notas de 
un alumno y escriba en la salida estándar su nota final. Permita ingresar por teclado N, la cantidad 
de alumnos a calificar.*/


# include <iostream>
using namespace std;

int main(){
	
	double n1,n2,n3;
	int cantidad_alumnos;
	
	cout<<"Ingrese la nota 1 :";
	cin >> n1;
	cout<<"Ingrese la nota 2 :";
	cin >> n2;
	cout<<"Ingrese la nota 3 :";
	cin >> n3;
	
	cout.precision(4);
	cout<<"La nota final del alumno es : " << ((n1*1.30)+(n2*1.60)+(n3*1.10)/3)<<endl;
	
	cout<<"Ingres la cantidad de alumons a calificar : ";
	cin >> cantidad_alumnos;

	
	return 0;
}