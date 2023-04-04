/*Ejercicio 6.1: Haga un programa en donde se ingresará una cantidad X de segundos, para luego
convertir a horas, minutos y segundos.
*/

# include <iostream>

using namespace std;

int main(){
	
	int segundos;
//	int minutos=segundos/60;
//	int horas=segundos/3600;
	
	cout<<"Ingrese la cantidad de segundos: ";
	cin >> segundos;
	
	cout << " "<< endl;
	cout<<"Conversion.... ";
	cout << " "<< endl;
	
	cout << "segundos : "<< segundos<<endl;
	cout << "minutos : "<< segundos/60<< endl;
	cout << "horas : "<< segundos/3600<<endl;
		
	return 0;
}