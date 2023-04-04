/*6.2: Modifique el programa que pida valores enteros para hora, otra para minutos, y otra para
segundos, como resultado lo transforma y muestra el total a cantidad de segundos*/

# include <iostream>

using namespace std;

int main(){
	
	int horas;
//	int minutos=segundos/60;
//	int horas=segundos/3600;
	
	cout<<"Ingrese la cantidad de horas: ";
	cin >> horas;
	
	cout << " "<< endl;
	cout<<"Conversion.... ";
	cout << " "<< endl;
	
	cout << "segundos : "<< horas*3600<<endl;
	cout << "minutos : "<< horas*60<< endl;
	cout << "horas : "<< horas <<endl;
		
	return 0;
}