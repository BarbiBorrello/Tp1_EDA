/*Ejercicio 1: Realice un programa que solicite de la entrada estándar un entero del 1 al 10 y muestre en 
la salida estándar su tabla de multiplicar. Use un menú para elegir varias tablas diferentes a elección.*/
#include <iostream>



using namespace std;

int main()
{
    char seguir;
    int i, numero;
    
    cout <<"TABLAS DE MULTIPLICAR " << endl;
    cout <<endl;
    
    
    do
    {
        cout << "Introduzca un numero entero : ";
        cin >> numero;
		cout <<endl;
		
		
        /* Inicio del anidamiento */

        for ( i = 0 ; i <= 10 ; i++ )

            cout<< numero << "x"<< i <<"= "<< numero*i << endl;

        /* Fin del anidamiento */
		cout <<endl;
        cout << "Desea ver otra tabla (s/n)?:" << endl;
  
		fflush( stdin );

        cin >> seguir;

    } while ( seguir != 'n' );

    return 0;
}