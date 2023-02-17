/*Sobre Carga de Funciones*/

#include<iostream>
#include <cstdlib>
using namespace std;


int sobrecarga ( int );
int sobrecarga ( int, double );
float sobrecarga ( float, float );
int sobrecarga ( float, float, float );

int main ( int argc, char* argv[] ){

int x=4, y=5;
float a=6.0, b=7.0, c=9.0;

	cout << "El Cuadrado de " << x << " es " << sobrecarga(x) << endl;
	cout << "El Producto de " << x << " por " << y <<" es: " << sobrecarga(x,y) << endl;
	cout << "La suma de " << a << " y " << b << " es " << sobrecarga (a, b) << endl;
	cout << "La media de " <<a <<" , " <<b <<" y " <<c <<" es: " <<sobrecarga (a,b,c) << endl;	


return EXIT_SUCCESS;
}

int sobrecarga ( int x ){ return x*x; }

int sobrecarga (int x, double y){ return x*y; }

float sobrecarga (float a, float b){ return a+b; }

int sobrecarga (float a, float b, float c){ return (a+b+c)/3; }
