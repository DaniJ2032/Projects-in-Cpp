/*Escriba una Clase en C++, llamada complejo que permita la gestion de numeros complejos mediante el ingreso
 * de dos numeros reales de la forma ( x = A + jB )
 * OPERACIONES A IMPLEMENTAR: 
 * A- Funcion leerComplejo() permite leer un objeto de tipo Complejo
 * B- Funcion escribirComplejo() muestra el complejo
 * C- suma ( x + y ) = ( A + jB ) + ( C + jD ) = ( A + B ) + j( C + D )
 * D- resta ( x - y ) = ( A + jB ) - ( C + jD ) = ( A - B ) +j( C - D )
 * E- multiplicacion de complejos ( x*y ) = ( A + jB ) * ( C + jD ) = ( A*C - B*D ) + j(A*D + B*C)
 * F- multiplicacion por un real constante ( C*X ) = ( C*A ) + j( C*B )
 * G- Conjugado x_ = ( A - jB )
 * H- Fasor modulo sqrt( A^2 + B^2 )
 * 			fase arctang ( B / A )*/

#include<math.h>
#include"complejo.h"//neustra libreria creada
#include <iostream>
#include <cstdlib>
using namespace std;

void Complejo::leerComplejo( float r, float i){

	//float r, i; //OJO estas Variables son locales, no de atributos de la calse

//	cout <<"Parte Real: "; cin >> r;
//	cout <<"Parte Imaginaria:"; cin >> i;
	ponerReal(r);
	ponerImg(i);

}//Fin del void leerComplejo()		

void Complejo::escribirComplejo()
{

cout << "Real: " << obtenerReal() << " Imaginario: "<< obtenerImg() << endl;

}//Fin del la funcion escribirComplejo		

void Complejo::suma(Complejo _a, Complejo _b) //(A+jB)+(C+jD) = (A+C)+j(B+D)
{

	ponerReal( _a.obtenerReal()+ _b.obtenerReal()); 
	ponerImg(_a.obtenerImg() + _b.obtenerImg());	
	
	

}//Fin de la funcion suma

void Complejo::resta(Complejo _a, Complejo _b) //(A+jB)+(C+jD) = (A+C)+j(B+D)
{

	ponerReal( _a.obtenerReal() - _b.obtenerReal());
	ponerImg(_a.obtenerImg() - _b.obtenerImg());	


}//FIn de la funcion resta		

void Complejo::multiplicacion(Complejo _a, Complejo _b)
{

	ponerReal( _a.obtenerReal() * _b.obtenerReal() - _a.obtenerImg() * _b.obtenerImg());
	ponerImg(_a.obtenerReal() * _b.obtenerImg() + _a.obtenerImg() * _b.obtenerReal());	

}

void Complejo::multiplicacion(float _a, Complejo _b)
{

	ponerReal( _a *_b.obtenerReal());
	ponerImg(_a * _b.obtenerImg());	

}//Fin de la funcion multiplicacion		

void Complejo::conjugado( Complejo a)
{

	ponerReal(a.obtenerReal());
	ponerImg(a.obtenerImg());

}//Fin de la funcion conjugado

void Complejo::fasor( Complejo a)
{

float mod, fase;


	mod = sqrt(pow(a.obtenerReal(), 2) + pow(a.obtenerImg(), 2));
	fase = atan2(a.obtenerImg(), a.obtenerReal());

	cout <<"El Fasor del numero complejo " << a.obtenerReal() <<" + j" << a.obtenerImg()
		   << " es: " << "Modulo: " << mod << " Fase: " << fase << endl; 	
}


int main(){

Complejo p, p1, res; // Objetos de tipo Complejo
float a , b, c, d;


	cout << "\n\nBien Vendio... Introduzca un numero complejo con su parte real e imaginaria: ";
	cin >> a >> b; //recojo lo obtenido por teclado
	p = Complejo ( a, b ); // le asigno los valos al complejo p

	cout << "\nAhora ingrese otro numero complejo: ";
	cin >> c >> d; //recojo lo obtenido por teclado	
	p1 = Complejo ( c, d );

	p.leerComplejo( a, b ); //paso los parametros 	
	p1.leerComplejo( c, d ); 

	cout << endl;
	p.escribirComplejo(); //Muestro los parametros
	p1.escribirComplejo();

	res.suma(p, p1); //paso compeljos para sumar
	cout <<"\nSUMA DE LOS DOS COMPLEJOS ES: "; res.escribirComplejo(); //muestro la suma

	res.resta(p, p1); //resto complejos
	cout <<"\nRESTA DE LOS DOS COMPLEJOS ES: "; res.escribirComplejo(); //muestro la resta

	res.multiplicacion( p, p1 );
	cout <<"\nMULTIPL DE LOS DOS COMPLEJOS ES: "; res.escribirComplejo(); //muestro la multiplicacion

	res.multiplicacion( a, p1 );
	cout <<"\nMULTIPL COMPLEJO POR CONSTANTE: "; res.escribirComplejo(); //muestro la suma

	res.conjugado( p );
	cout <<"\nCONJUGADO: "; res.escribirComplejo(); //muestro la suma
	
	cout << endl;
	cout <<"\nFASOR: "; res.fasor( p ); //muestro la suma

return EXIT_SUCCESS;
}		

















