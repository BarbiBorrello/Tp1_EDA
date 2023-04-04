/*
 Ejercicio 8: En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de: a)
Alumnos que aprobaron todos los exámenes. b) Alumnos que aprobaron al menos un examen. c) Alumnos que
aprobaron únicamente el último examen.
 */

#include <iostream>

using namespace std;

int main() {


    int aprobados = 0;
    int aprobados_almenos_uno = 0;
    int aprobados_ultimo = 0;


    for (int i = 0; i < 5; i++) {
    	
        int nota_examen1 = 0;
        int nota_examen2 = 0;
        int nota_examen3 = 0;
        
        cout<<endl;
        
    
        cout << "Ingrese la nota del examen 1: ";
        cin >> nota_examen1;
        cout << "Ingrese la nota del examen 2: ";
        cin >> nota_examen2;
        cout << "Ingrese la nota del examen 3: ";
        cin >> nota_examen3;

        if (nota_examen1 >= 7 && nota_examen2 >= 7 && nota_examen3 >= 7) {
            aprobados++;
        }

        if (nota_examen1 >= 7 || nota_examen2 >= 7 || nota_examen3 >= 7) {
            aprobados_almenos_uno++;
        }

        if (nota_examen1 < 7 && nota_examen2 < 7 && nota_examen3 >= 7) {
            aprobados_ultimo++;
        }
    }

	cout<<endl;
	cout << "Procesando resultados..."<<endl;
	cout<<endl;
	cout << "Alumnos que aprobaron todos los examenes: " << aprobados << endl;
    cout << "Alumnos que aprobaron al menos un examen: " << aprobados_almenos_uno <<endl;
    cout << "Alumnos que aprobaron unicamente el ultimo examen: " << aprobados_ultimo <<endl;


    return 0;
}
 
 /* ME HUBIESE GUSTADO PODER INGRESAR LOS NOMBRES DE LOS ALUMNOS, PERO NO PUEDO POR CUESTION DE TIEMPO :( */