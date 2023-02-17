#include "Conicas.h"


int main ( int argc, char* argv[] )
{
	
//struct parRecta recta;
Punto p1, p2, p3;
Parabola parab1;

	p1.ponerX(-1.0);
	p1.ponerY(1.0);
	p2.ponerX(1.0);
	p2.ponerY(9.0);
	p3.ponerX(-2.0);
	p3.ponerY(0.0);

parab1.obtenerParam(p1, p2, p3, parab1);

	cout << "Los Parametros de la parabola son: \n" 
		<<"Coeficiente Cuadratico a: " <<parab1.obtenerA() << "\n"
		<<"Coeficiente Lineal b: " << parab1.obtenerB() << "\n"
		<<"Termino Independiente c: " << parab1.obtenerC() << "\n" <<endl;

	return EXIT_SUCCESS;		
}





