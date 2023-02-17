/*Cuerpo de funciones del encabezado Punto.h*/
#include "Punto.h"

/**************************************************************************************/
/* Seccion para la definir metodos y constructores para la "class Punto" */

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



/*parRecta eqRecta(Punto p1, Punto p2, parRecta par){
	
	float m,o;
	
	m = (p2.y - p1.y) / (p2.x - p1.x); //saco pendiente
	o = -m*p1.y + p2.y; //Ord al origen
	par.m = m;
	par.o = o;
	
return par;
} //fin de la funcion parRecta();*/

/**************************************************************************************/
/* Seccion para definir contructores y metodos en la "class Segmento"*/

//Constructor por defecto
Segmento::Segmento()
{

	largo = 1.0;
	angulo = 90;

}

//Contructor con los parametros dados por el usuario
Segmento::Segmento(float _largo, float _angulo)
{		

	largo = _largo; //Atributo largo de la clase es caargado con el valor ingresado
	angulo = _angulo;// por el usuario; Tambien el angulo

}

/* **********************Metodos***************************** */

void Segmento::imprimirSegmento( )
{		

	cout <<"\n\n Largo del Segmento es: " << largo << "\n Su Angulo respecto de la horizontal es: " << angulo <<" grados" <<endl <<endl;

}

void Segmento::imprimirSegmento( Segmento& S )
{

	cout <<"\n\nLargo del Segmento es: " <<S.obtenerL() <<"\nSu Angulo respecto de la horizontal es: "<<S.obtenerA() <<" grados" <<endl <<endl;

}		

void Segmento::calcularSegmento( Punto a, Punto b, Segmento& S )
{

	S.largo = sqrt( (b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y) );
	S.angulo = (float) atan2 ( (b.y - a.y) , (b.x - a.x) ) * (180/pi);	

}		

void Segmento::asignarSegmento(float _largo, float _angulo , Segmento& S)
{		

	S.ponerL(_largo);
	S.ponerA(_angulo);

}
/**********************************************************************/

/*************************************************************************************/

/************************************************************************************************************************/
//
/***************************************************************************/
/*Seccion para definir constructores y metodos de la "class Triangulo"  ****/ 
/*
 ***************************************************************************/

Triangulo::Triangulo()
{		

	at = 0.0;
	pt = 0.0;
	t = "Inserte el Tipo de Triangulo";	

}

Triangulo::Triangulo(float _largo, float _angulo, float _area, float _perimetro, string _t):Segmento( _largo, _angulo) //Le digo que los dos primeros estan en la super class
{

	at = _area;
	pt = _perimetro; //Cargo valores metidos por el usuario
	t = _t;	

}	

void Triangulo::imprimirTriangulo()
{

	cout <<"El triangulo tiene un perimetro de: "<< pt <<" un area de: "<< at <<" y es un Triangulo: "<< t << endl << endl;

}
 void Triangulo::area(float _largo)
{

float altura;

	altura = sqrt(((_largo * _largo) - (_largo * _largo)/4.0));
	at = _largo * altura / 2.0;
	t = "Equilatero";	

}	

void Triangulo::perimetro(float _largo)
{

	pt = 3 * _largo;
	t = "Equilartero";	  

}		

void Triangulo::area(float u, float v, float w)
{

float aux = 0.0, uu, vv, ww, s;
			
	uu = u;
	vv = v;
	ww = w;


	if((u > v+w) || (v > u+w) || (w > u+w))
	{

	cout <<"ERROR: Las medidas no son compatibles para que de un triangulo\n\n";	
	return;

	}

	if((u < v) && (v < w))
	{

		aux = uu;
		uu = vv;
		vv = ww;
		ww = aux;		

	}		
	else if((u < v) && (u > w))
	{
	
		aux = uu;
		uu = vv;
		vv = aux;

	}
	else if(( u < v) && (v > w))
	{		
	
		aux = uu; 
		uu = vv;
		vv = aux;	
	
  	}

	
	s = (u+v+w)/2;
	at = sqrt(s* (s-u)*(s-v)*(s-w));

	if((u == v) && (v == w))
	{

		t = "Equilatero";

	}
	else if((u==v)||(u==w)||(v==w))
	{

		t = "Isosceles";	
		
	}
	else if(((u*u)== (v*v) + (w*w)) || ((v*v)== (u*u) + (w*w)) || ((w*w)== (u*u) + (v*v)))
	{		
	
		t = "Escaleno y Rectangulo";

	}	
	else if(((uu*uu) < (vv*vv) + (ww*ww)))
	{

		t = "Escaleno y Acutangulo";

	}		
	else
		t = "Escaleno y Obtusangulo";

}



void Triangulo::perimetro(float u, float v, float w)
{

	pt = u+v+w;

}		





