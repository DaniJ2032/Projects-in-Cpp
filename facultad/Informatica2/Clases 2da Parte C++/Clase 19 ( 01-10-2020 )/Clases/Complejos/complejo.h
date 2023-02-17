/*Clase en C++ para gestionar numeros complejos*/

#ifndef COMPLEJO_H_INCLUDE
#define COMPLEJO_H_INCLUDE 

#include <iostream>
#include<cstdlib>
using namespace std;

class Complejo{


	public:
	//getter			
	float obtenerReal(){return r;}	
	float obtenerImg(){return i;}

	//setters
	void ponerReal(float r1){r = r1;}
	void ponerImg(float i1){ i = i1; }
	
	//Constructores
	Complejo(){ r = 0.0; i = 0.0;}
	Complejo(float r1, float i1){ r = r1; i = i1;}

	//Destructor
	~Complejo(){}; //~ <- virgulilla 

	//metodos
	void leerComplejo( float r, float i );
	void escribirComplejo();
	void suma(Complejo a, Complejo b);
    void resta(Complejo a, Complejo b);

	
	/*Multiplica dos numeros complejos dados por los objetos a y b de tipo Complejo
	Variables de entrada: Objetos a y b
	Variables de salida: datos private real e imaginario
	Variable devuelta: Ninguna	
    Utilizacion: Le paso do numero complejos*/

	void multiplicacion(Complejo a, Complejo b);

	void multiplicacion(float a, Complejo b); //Sobrecarga de funcion
	void conjugado (Complejo a);
	void fasor (Complejo a);

	private:
		float r, i;
};		
#endif //Complejo_H 
