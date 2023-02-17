/*Programa que devuelve el perimetro y area de un circulo dado su radio*/

#include <iostream>
using namespace std;
#include<cstdlib>
#define pi 3.141592 //Definimos la variable pi

int main( ){

float radio, perimetro, area; //Variables para calculo

	cout << endl;
	cout << "Ingresa el valor del Radio: ";
	cin >> radio; //Lee el radio ingresado por teclado

	//calculos
	perimetro = (2 * pi * radio);
	area = (pi * radio * radio);

	//Imprimo Rersultados
	cout << "Radio es:" << radio << endl;
	cout << "Perimetro es:" << perimetro << endl;
	cout << "Area es:" << area << endl;


return EXIT_SUCCESS;	
//return 0;
};//FIn del main();	

