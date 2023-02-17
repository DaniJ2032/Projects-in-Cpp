/*Cuerpo de funciones del encabezado Punto.h*/
#include "Punto.h"

Punto::Punto()
{
	
	x = 0.0;
	y = 0.0;
	z = 0.0;
	
}//Fin del Punto::Punto		

Punto::Punto(float _x, float _y, float _z)
{
	
	x = _x;
	y = _y;
	z = _z;	
	
	
}//Fin de la Punto::Punto

Punto::Punto(const Punto &p)
{		
	
	x = p.x;
	y = p.y;
	z = p.z;
	
	
}//Fin del la Punto::Punto


void Punto::escribirPunto()
{		
	
	cout << " " << obtenerX() << " " << obtenerY() << " " << obtenerZ() << endl;
	
	
}//Fin del void escribirPunto


void Punto::asignarPunto (float _x, float _y, float _z)
{
	
	x = _x;
	y = _y;
	z = _z;
	
}//Fin del void asignarPuntero

parRecta eqRecta(Punto p1, Punto p2, parRecta par){
	
	float m,o;
	
	m = (p2.y - p1.y) / (p2.x - p1.x); //saco pendiente
	o = -m*p1.y + p2.y; //Ord al origen
	par.m = m;
	par.o = o;
	
return par;	
} //fin de la funcion parRecta();
	
