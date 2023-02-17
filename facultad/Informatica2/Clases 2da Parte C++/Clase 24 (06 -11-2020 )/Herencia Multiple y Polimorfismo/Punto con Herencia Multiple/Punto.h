/*Programa que utiliza una clase y define un punto en el espacio*/
#ifndef PUNTO_H_INCLUDED
#define PUNTO_H_INCLUDED

#include<iostream>
#include<cstdlib>
#include<math.h>
#include<string.h>
#define pi 3.141592
using namespace std;

//Estructura que guarda los parametros de una recta
struct parRecta
{
	
	float m; //pendiente
	float o; //Ord al Origen
	
};//fin dle struct


class Punto{  //Dfeinimos la clase 
	
//	friend parRecta eqRecta(Punto p1, Punto p2, parRecta par);	//Declaro funcion amiga
	friend class Segmento;

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

class Segmento{

	public:
	
		//Seters:
		void ponerL(float valorL){ largo = valorL; }//para longitud
		void ponerA(float valorA){ angulo = valorA; }// para el angulo	
		//Geteners:
		float obtenerL(){ return largo; }//devuelvo el valor de la long del segm.	
		float obtenerA(){ return angulo; }//Devuelvo el valor del angulo del segm.
		
		//Construcrtores
		Segmento();

		//NOTA: SI O SI MANDAR PRIMERO EL LARGO Y DESPUES EL ANGULO!!
		//Uso: Segmento objSeg (_largo , _angulo); 
		Segmento(float _largo, float _angulo);
      
		//Destructor		
		~Segmento(){};

		//Metodos
		void imprimirSegmento();//Muestro valor por defecto del segmento
		void imprimirSegmento( Segmento& S );//Muestra valor del segmento como parametro
		void calcularSegmento( Punto, Punto, Segmento& );//Calculo dist entre 2 puntos	
		void asignarSegmento( float _largo, float _angulo ,Segmento& );//Carga los valores de log y angulo y los carga en el segmento dado

	/*private:*/	protected: //En protected accedemos en la Herencia a lo privado	
	
		float largo, angulo; //long y angulo en grados desde el eje horizontal
							 //Usar siempre la misma medida		

};//fin de class Segmento

class Triangulo:public Segmento{ //Tenemos accseso a los metodos de Segmento
								 //Heredamos de Segmento
	public:
			
		//Seters
		void ponerAt(float _area){at = _area;}
		void ponerPt(float _perimetro){ pt = _perimetro;}
		void ponerT(string _tipo){t = _tipo;}

		//Geters
		float obtenerAt(){return at;}
		float obtenerPt(){return pt;}
		string obtenerT(){return t;}

		//Constructores
		//Cargo los valores por defecto	
		Triangulo();//primero los de la super clase desp los del hijo		
		Triangulo(float _largo, float _angulo, float _at, float _pt, string _t);
	
		//Destructor
		~Triangulo(){};

		//Metodos
		void imprimirTriangulo(); //Muestro el triangulo

		//Calculo de area y perimetro de un triangulo equilatero
		void area(float); //Triangulo equilatero si pasamos un solo lado
		void perimetro(float);//Obtiene el perimetro de un triangulo equilatero

		virtual void area();//POLIMORFISMO se le pone virtual al padre de mayor jearquia
		/***********************************************************************/
		/*Calculo de area y perimetro para cualquier triangulo con sus lados*/
		void area(float u, float v, float w);
		void perimetro(float u, float v, float w);		


//	private:
	protected:

		float at, pt; //Area del triangulo y Permietro del triangulo
		string t; //Cadena de caracteres que guarda el tipo de triangulo objeto

};
/***********************************CLASE 06-11-2020***********************************/


class Tetrahedro: public Triangulo
{

	public:	

	//Seters
	float obtenerA(){return ath;}
	float obtenerV(){return vth;}

	//Geters
	void ponerA(float _ath){ath = _ath;} 
	void ponerV(float _vth){vth = _vth;}
	
	//Constructores
	Tetrahedro(); //Constructor por defecto
	Tetrahedro(float _largo, float _angulo, float _a , float _p , string _t, float _ath, float _vth);

	//Destructor
	~Tetrahedro(){};


	//Metodos
	/* Funcion que calcula el area de un tetrahedro y la guarda en ath
	 * Ecuacion que se usa: ath = 3*a
	 * a: area del Triangulo que se obtiene de la funcion miembro Triangulo::obtnerA();
	 * */
	void area();

	/* Funcion que calcula el volumen de un tetrahedro y la guarda en vth
	 * Ecuacion que se usa: vth = 4*a * sqrt(2)/12
	 */
	void volumen();

	private:
	
	float ath, vth;

};		


class Cuadrado:public Segmento
{

	public:
			
		//Seters
		void ponerA(float _area){ac = _area;}
		void ponerP(float _perimetro){pc = _perimetro;}
		void ponerT(string _tipo){tc = _tipo;}

		//Geters
		float obtenerA(){return ac;}
		float obtenerP(){return pc;}
		string obtenerT(){return tc;}

		//Constructores
		//Cargo los valores por defecto	
		Cuadrado();//primero los de la super clase desp los del hijo		
		Cuadrado(float _largo, float _angulo, float _area, float _perimetro, string _t);
	
		//Destructor
		~Cuadrado(){};

		//Metodos
		void imprimirCuadrado(); //Muestro el triangulo

		//Calculo de area y perimetro de un cuadrado
		void area(float); //Cuadrado si pasamos un solo lado
		void perimetro();//Obtiene el perimetro de un Cuadrado
		void area(); 


		//private:
		protected:	
		float ac, pc; //Area del cuadrado y Permietro del mismo
		string tc; //Cadena de caracteres que guarda el tipo de cuadrado objeto
		

};

/********************************************HERENCIA MULTIPLE*******************************************/
/*******************************************************************************************************/

class Piramide: public Cuadrado, public Triangulo
{

	public:
	
	//Constructores
	Piramide();
//Piramide(float, float, float, float, string, float, float, string, float, float, string):Cuadrado(),Triangulo()

	//Destructor
	~Piramide(){};

	//Seters
	void ponerA(float _area){ap = _area;}
	void ponerV(float _volumen){ vp = _volumen;}
	void ponerT(string _tipo){tp = _tipo;}

	//Geters
	float obtenerA(){return ap;}
	float obtenerV(){return vp;}
	string obtenerT(){return tp;}

	//Metodos
	void area();

	private:

	float ap, vp;
	string tp;

};

#endif 



