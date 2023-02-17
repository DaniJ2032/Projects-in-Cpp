/*Plantillas de Funciones*/

#include<iostream>
#include <cstdlib>
using namespace std;

template <class tDato> //Se le puede pasar cualquier tipo de dato

tDato mayor (tDato a, tDato b){

	if( a > b) 
		return a;
	else 
		return b;
	//fin del if else
}//fin de la funcion tDato mayor		

int main ( int argc, char* argv[] ){

int x = 4, y = 5;
float a = 6.0, b = 7.3;
char c = 'C', d = 'c';

	cout << "\n\nEl mayor de " << x << " y " << y << " es " << mayor(x,y) << endl;
	cout << "El mayor de " << a << " y " << b << " es " << mayor(a,b) << endl;
    cout << "El mayor de " << c << " y " << d << " es " << mayor(c,d) << endl;
	cout <<"\n";


return EXIT_SUCCESS;		
}
