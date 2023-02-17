#ifndef VACA_H_INCLUDE
#define	VACA_H_INCLUDE

#include<iostream>
#include<cstdlib>
using namespace std;


class Vaca
{

	private:
				
		char prop;
		char lugyfech;
		char raza, genero;

	public:

		//Setters:
		void SetProp(char nomb){ prop = nomb;}
				
		//Geters:
		char Getprop(){return prop;}

		//constructor
		Vaca();
		Vaca(char);
		Vaca(const Vaca &va);


		//Metodos desde el exterior
		void IngresaProp(char);
		void VerProp();

};


#endif //VACA_H
