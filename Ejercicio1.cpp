
/*
2. Calcula logaritmos a la base e, donde e es la constante igual a aproximadamente 2.71828. El 
logaritmo natural de cualquier número positivo, n, es el exponente, x, al que se debe elevar e para 
que ex = n. Por ejemplo, e2 = 7.389, por lo que el logaritmo natural de 7.389 es 2.
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
	double n;
	const double e = 2.71828;
	
	cout << "Ingrese un numero positivo :";
	cin >> n;
	
	double result = pow(e,n);
	cout.precision(4);
	
	cout<< "El logaritmo natural de "<< result << " es " << n <<endl;

	return 0;
}