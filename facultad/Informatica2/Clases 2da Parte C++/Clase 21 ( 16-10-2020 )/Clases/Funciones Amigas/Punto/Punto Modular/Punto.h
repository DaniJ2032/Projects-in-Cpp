/*Programa que utiliza una clase y define un punto en el espacio*/
#ifndef PUNTO_H_INCLUDED
#define PUNTO_H_INCLUDED

#include<iostream>
#include <cstdlib>
using namespace std;

//Estructura que guarda los parametros de una recta
struct parRecta
{
	
	float m; //pendiente
	float o; //Ord al Origen
	
};//fin dle struct


class Punto{  //Dfeinimos la clase 
	
	friend parRecta eqRecta(Punto p1, Punto p2, parRecta par);	//Declaro funcion amiga
	
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
#endif 
