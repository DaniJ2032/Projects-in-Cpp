/***Archivo de cabecera donde tenemos las clases de nuestro Torno***/

#ifndef TORNO_H_INCLUDED
#define TORNO_H_INCLUDED

#include<iostream>
#include<cstdlib>
#include<string.h>
using namespace std;

/*************************************Clase Torno ********************************************************/

class MantenimientoTorno;//Direccionamiento para la funcion amiga

class Torno //Clase pardre o Super Clase
{
	
	friend void MostrarDatos(Torno &tor, MantenimientoTorno &mtor); //Funcion amiga, Tambien la declaramos en la clase Hija 

	public:
			
		//Seters
		void ponerC(string _color) {color = _color;}
		void ponerP(string _nombCompleto) { nombCompleto = _nombCompleto;}
		void ponerH(int _Hsfun) {Hsfun = _Hsfun;}

		//Geters
		string obtenerC(){return color;}
		string obtenerP(){return nombCompleto;}
		string obtenerM(){return modelo;}
		string obtenerMarc(){return marca;}
		int obtenerNumSerie(){return numSerie;}
		int	obtenerHsfun(){return Hsfun;}	


		//Constructores
		Torno();	// por Defecto 
		Torno(string _marca, string _mdoelo, string _color, string nombCompleto, int numSerie, int Hsfun); //Contructor para carga de valores de un usuario
		Torno(const Torno &p); //Constructor Copia
	
		//Destructor
		~Torno(){}; 
	
		//Metodos
		virtual void imprimir(); //Funcion virtual Lo unico que hacemos es imprimir los datos del torno

	private:
								
		int numSerie, Hsfun;						//Atributos de mi clase Torno
		string marca, modelo, color, nombCompleto;

};

/*****************************************************************************************************/


/***********************************clase MantenimientoTORNO***********************************/
class MantenimientoTorno:public Torno
{

	friend void MostrarDatos(Torno &tor, MantenimientoTorno &mtor); //Funcion amiga 
	
	public:	

	//Geters
		int obtenerHa(){return Haceite;}
		int obtenerHr(){return Hrotatoria;}
		int obtenerHc(){return Hcorte;}
		int obtenerHu(){return Hultima;}

	//seters
		void ponerHa(int _Haceite){Haceite = _Haceite;} 
		void ponerHr(int _Hrotatoria){Hrotatoria = _Hrotatoria;}
		void ponerHc(int _Hcorte){Hcorte = _Hcorte;} 
		void ponerHu(int _Hultima){Hultima = _Hultima;}


	//Constructores
		MantenimientoTorno();	
		MantenimientoTorno(string _marca, string _mdoelo, string _color, string _nombCompleto, int _numSerie, int _Hsfun, int _Haceite, int _Hrotatoria, int _Hcorte, int _Hultima);
		MantenimientoTorno(const MantenimientoTorno &p);
	
	//Destructor
		~MantenimientoTorno(){};

	//Metodos
		void imprimir();
	
	private:

	int Haceite, Hrotatoria, Hcorte, Hultima;

};		
/*****************************************************************************************************/

#endif 



