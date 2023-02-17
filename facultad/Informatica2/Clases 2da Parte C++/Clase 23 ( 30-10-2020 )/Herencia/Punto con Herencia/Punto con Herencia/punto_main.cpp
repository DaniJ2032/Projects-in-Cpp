#include "Punto.h"


int main ( int argc, char* argv[] )
{

Punto p1 (2.0, 3.0, 0.0), p2 (4.0, 5.0, 0.0);
Segmento s1;
Triangulo t1, t2;


	s1.calcularSegmento(p1, p2, s1);
	s1.imprimirSegmento();

	t1.imprimirTriangulo();
	t1.area(10.0);
	t1.perimetro(10.0);
	t1.imprimirTriangulo();

	t2.area(3.0,6.5,4.0);
	t2.imprimirTriangulo();


return EXIT_SUCCESS;		
}





