/*Lados de un Triangulo y calculo de su Area y Perimetro*/
#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int main (int argc, char*argv[]){

float a,b,c,p, area;

	cout << "\n\nIntroduzca los Valores de los 3 lados del Traingulo: ";
	cin >> a >> b >> c;

	if(( a <= 0 ) || ( b <= 0 ) || ( c <= 0 ) || 
					((a+b) < c ) || ((a+c) < b ) || ((b+c) < a ) )
			cout << "un/los lados ingresados no dan un Triangulo\n";
	else{
		
		p =( a+b+c )/2;
		area = pow( p * ( p-a ) * ( p-b ) * ( p-c ), 0.5);
		cout <<"La Solucion es: \n";
		cout <<"Area: "<<"( "<< area <<" )"<< endl;
		cout <<"Perimetro: "<<"( "<< (p*2) <<" )"<< endl;

	}
	//Fin del if() else	

		//Fin del if() else
return EXIT_SUCCESS;
}		
