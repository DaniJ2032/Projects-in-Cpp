/*Programa que utiliza una clase y define un punto en el espacio*/
#ifndef CONICAS_H_INCLUDED
#define CONICAS_H_INCLUDED

#include<iostream>
#include <cstdlib>
using namespace std;

//Estructura que guarda los parametros de una recta
struct parRecta
{
	
	float m; //pendiente
	float o; //Ord al Origen
	
};//fin dle struct


class Punto
{  //Dfeinimos la clase 
	
	friend parRecta eqRecta(Punto p1, Punto p2, parRecta par);	//Declaro funcion amiga
	friend class Parabola; //declaro la class parabola para tenes acceso;

public:

	//getters: metodos para obtener los valores de los atributos	
	float obtenerX(){return x;}
	float obtenerY(){return y;}
	float obtenerZ(){return z;}
	
	//setters: Ingresan los valores de los atributos desde el exterior
	void ponerX(float valx){x = valx;}
	void ponerY(float valy){y = valy;}
	void ponerZ(float valz){z = valz;}
	
	//Constructores: Funcion miembro que inicializa a un objeto, 
	//despues de los valores iniciales; 
	//Siempre tienen los mismos valores de las calses, no retornan ningun valor,
	//Deben ser public ( pueden ir en private pero con calses amigas o herederas), 
	//No se heredan	
	
	Punto(); //Constructor por defecto
	Punto(float valx): x(valx), y(0.0), z(0.0){}; //Contructor que inicializa miembro x
	Punto(float, float, float); //Inicializa los tres atributos 
	Punto(const Punto &p); //Contructor copia
	
	//Metodos ejecutables desde el exterior
	void escribirPunto();	
	void asignarPunto(float, float, float);
	
private:
	float x, y, z;
	
};//Fin de la Class Punto	

class Parabola
{
public:
	//getters: metodos para obtener los valores de los atributos	
	float obtenerA(){return a;}
	float obtenerB(){return b;}
	float obtenerC(){return c;}
	
	//setters: Ingresan los valores de los atributos desde el exterior
	void ponerA(float vala){a = vala;}
	void ponerB(float valb){b = valb;}
	void ponerC(float valc){c = valc;}
	
	//Constructores
	Parabola(); //Constructor por defecto
	Parabola(float, float, float); //Inicializa los tres atributos 
	Parabola(const Parabola &pa); //Contructor copia
	
	//Destructor
	~Parabola(){};
	
	//Metodos ejecutables desde el exterior
	//Escribir como armo la matriz y que resuelvo con el metodo de Cramer
	void obtenerParam( Punto, Punto, Punto, Parabola&);

private:
	float a, b, c;	
	//float foco, directriz, vertice; 
};

#endif 
