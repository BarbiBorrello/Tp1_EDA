/*Ejercicio 7: Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo
rectángulo y escriba en la salida estándar: A) perímetro y superficie y B) su hipotenusa*/

# include <iostream>
using namespace std;

int main(){
	
	double cateto1, cateto2;
	
	cout <<"Ingrese cateto 1 :";
	cin >> cateto1;
	
	cout <<"Ingrese cateto 2 :";
	cin >> cateto2;
	
//	perimetro = 2 * (cateto1 + cateto2);
//  superficie = cateto1 * cateto2;
//  hipotenusa= (cateto1*cateto1)+(cateto2*cateto2;)

	cout <<"A) Su perimetro es :" << 2 * (cateto1 + cateto2) << " y" <<" " <<" su superficie : "<< cateto1 * cateto2<<endl;
	cout <<"B) Su Hipotenusa es :" << (cateto1*cateto1)+(cateto2*cateto2);

	return 0;
}