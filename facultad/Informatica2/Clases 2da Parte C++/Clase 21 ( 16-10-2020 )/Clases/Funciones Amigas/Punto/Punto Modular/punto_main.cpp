#include<iostream>
#include <cstdlib>
#include "Punto.h"
using namespace std;


int main ( int argc, char* argv[] )
{

struct parRecta recta;
Punto p1, p2;

	p1.ponerX(1.0);
	p1.ponerY(2.0);
	p2.ponerX(2.0);
	p2.ponerY(3.0);
	
	recta = eqRecta(p1, p2, recta);
	
	cout << "\nLos parametros son: \n Pendiente: "<< recta.m << "\nOrd. Al origen"
		<<recta.o <<endl;
	
return EXIT_SUCCESS;		
}





