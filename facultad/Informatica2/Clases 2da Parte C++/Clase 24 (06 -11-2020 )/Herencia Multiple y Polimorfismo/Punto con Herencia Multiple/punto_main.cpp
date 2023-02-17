#include "Punto.h"


int main ( int argc, char* argv[] )
{

Punto p1 (2.0, 3.0, 0.0), p2 (4.0, 5.0, 0.0);
Segmento s1;
Triangulo t1, t2;

Tetrahedro tetra;
Cuadrado cuadra;
Piramide pir1;


	s1.calcularSegmento(p1, p2, s1);
	s1.imprimirSegmento();

	t1.imprimirTriangulo();
	t1.area(10.0);
	t1.perimetro(10.0);
	t1.imprimirTriangulo();

	t2.area(3.0,6.5,4.0);
	t2.imprimirTriangulo();

	tetra.ponerL(10.0);
	tetra.area();

	cout <<" El Area del tetrahedro es: "<< tetra.obtenerA() << endl;

	tetra.volumen();

	cout <<" El Volumen del tetrahedro es: "<< tetra.obtenerV() << endl;

	
	cuadra.ponerL(10.0);
 	cuadra.area();

	cout <<" El Area del Cuadrado es: "<< cuadra.obtenerA() << endl;

	cuadra.perimetro();

	cout <<" El perimetro del Cuadrado  es: "<< cuadra.obtenerP() << endl;


	pir1.Triangulo::ponerL(10.0);
	pir1.Cuadrado::ponerL(10.0);
	pir1.area();

	cout <<" El area de la Piramide vale: "<< pir1.obtenerA() << " y es un: " <<pir1.obtenerT() <<endl <<endl;


return EXIT_SUCCESS;		
}





