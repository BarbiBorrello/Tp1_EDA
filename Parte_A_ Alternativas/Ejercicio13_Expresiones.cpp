/*Ejercicio 13: Escribe la siguiente expresión en C++. Use precisión para redondear la salida del cout.
A) f(a,b)= (a/b) + 1
B) f(a,b)= (a+b)/(c+d)
C) f(a,b)= (a+(b/c))/(d+(e/f))
D) f(a,b)= a + (b/(c-d))*/


# include <iostream>

using namespace std;

int main(){
	
	float a=0, b=0, c=0, d=0, e=0, f=0;
	
    cout << "Introduce a: ";
    cin >> a;
    cout << "Introduce b: ";
    cin >> b;
    cout << "Introduce c: ";
    cin >> c;
    cout << "Introduce d: ";
    cin >> d;
    cout << "Introduce e: ";
    cin >> e;
    cout << "Introduce f: ";
    cin >> f;
    
    cout.precision(3);
    
    cout << "A) " <<(a/b) + 1 << endl;
    cout << "B) " <<(a+b)/(c+d) << endl;
    cout << "C) "<<(a+(b/c))/(d+(e/f)) << endl;
    cout << "D) "<<a + (b/(c-d)) << endl;
	
	
	return 0;
	
}