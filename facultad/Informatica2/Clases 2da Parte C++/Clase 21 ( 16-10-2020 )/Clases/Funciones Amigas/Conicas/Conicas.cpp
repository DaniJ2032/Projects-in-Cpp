#include "Conicas.h"

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
	

Parabola::Parabola()
{	
a = 0.0;
b = 0.0;
c = 0.0;	
}

Parabola::Parabola(const Parabola &pa)
{
a = pa.a;
b = pa.c;
c = pa.c;	
}



void Parabola::obtenerParam( Punto p1, Punto p2, Punto p3, Parabola &par)
{
	
float deltaP, deltaA, deltaB, deltaC, vala, valb, valc;	
	
	//TERMINAR¡¡¡¡¡
	deltaP = ((p1.x * p1.x) * p2.x + (p2.x * p2.x) * p3.x + (p3.x * p3.x) * p1.x) - ((p3.x * p3.x) * p2.x + ( p2.x * p2.x ) * p1.x + ( p1.x * p1.x ) * p3.x);//OK
	deltaA = ((p1.y * p2.x) + (p2.y * p3.x) + (p3.y * p1.x)) - ((p3.y * p2.x) + (p2.y * p1.x) + (p1.y * p3.x));//OK
	deltaB = ((p1.x * p1.x * p2.y) + (p2.x*p2.x * p3.y) + (p3.x * p3.x * p1.y))  - ((p3.x * p3.x * p2.y) + (p2.x * p2.x *p1.y) + ( p1.x * p1.x * p3.y));//OK
	deltaC = ((p1.x * p1.x * p2.x * p3.y) + (p2.x * p2.x * p3.x * p1.y) + (p3.x * p3.x * p1.x *p2.y)) - ((p3.x * p3.x * p2.x * p1.y) + (p2.x * p2.x * p1.x * p3.y) + (p1.x * p1.x * p3.x * p2.y));//OK
	/////
	vala = deltaA/deltaP;
	valb = deltaB/deltaP;
	valc = deltaC/deltaP;
	
	par.ponerA(vala);
	par.ponerB(valb);
	par.ponerC(valc);
	
}//fin de funcion
