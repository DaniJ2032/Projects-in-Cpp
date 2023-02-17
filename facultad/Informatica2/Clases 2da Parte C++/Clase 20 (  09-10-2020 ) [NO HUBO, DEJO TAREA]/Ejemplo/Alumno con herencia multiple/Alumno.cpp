/*Ejemplo de Herencia con alumnos*/

#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;

class Persona //Super clase o Clase Padre
{

	private: // si coloco protected: se hereda estas variables si esta private no

		string nombre;
		int edad;		

	public:

		Persona(string, int);	
		void MostrarPersona();


};

class Alumno : public Persona //con esto puedo acceder a todo lo publico de persona, Herencia de persona
{

	private:
		string legajo;
		float nota;

	public:

		Alumno(string, int, string, float); //Primero la super clase desp la hija	
		void MostrarAlumno();


};		



Persona::Persona(string _nombre, int _edad)
{

nombre = _nombre;
edad = _edad;

}//fin de funsion

Alumno::Alumno(string _nombre, int _edad, string _legajo, float _nota): Persona(_nombre, _edad) //Le indico que ya tengo los atributos de la persona
{		

	legajo = _legajo;
	nota = _nota;		

}//fin de funsion


void Persona::MostrarPersona()
{
	cout <<"Nombre: "<< nombre << endl;
   	cout <<"Edad: "<< edad << endl;	

}//fin de funsion


void Alumno::MostrarAlumno()
{

	MostrarPersona();
	cout << "Legajo: " << legajo << endl;
	cout << "Nota Final: " << nota << endl;		

}//fin de funsion





int main (int argc, char *argv[])
{

Alumno alumno1("Daniel", 25, "79111", 10.5);

	alumno1.MostrarAlumno();


return EXIT_SUCCESS;
}		




