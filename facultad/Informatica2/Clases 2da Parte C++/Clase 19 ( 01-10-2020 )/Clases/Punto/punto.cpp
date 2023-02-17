/*Programa qeu utiliza una clase y define un punto en el espacio*/

#include<iostream>
#include <cstdlib>
using namespace std;

class Punto{  //Dfeinimos la clase 
	   
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



int main ( int argc, char* argv[] )
{

Punto p, p1; //Clase Punto es una plantilla y def, los objetos ( p, p1)

	p.escribirPunto();
	p1.escribirPunto();

	p.asignarPunto(2.3, 4.5, 6.7);

	Punto p2 = Punto(5.0, 6.0, 7.0);
	Punto p3(8.0);
	//p3 = Punto(8.0);
	Punto p4(p2);

	cout << endl;
	cout << "Los Objetos tendran los siguientes atributos:\n";
	cout << "\np: ";  p.escribirPunto(); 
	cout << "\np1: "; p1.escribirPunto();
	cout << "\np2: "; p2.escribirPunto(); 
	cout << "\np3: "; p3.escribirPunto();
	cout << "\np4: "; p4.escribirPunto();


return EXIT_SUCCESS;		
}





