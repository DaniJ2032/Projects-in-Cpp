///////*FORMUAL w^2 = 1/LC
//////*w = 2pi*frec
////// *L = henrios  (bobina)
///// *C = Capacitor en uf 
///// Para calcular L = 1 /(w^2*C)		 	 	

#include<iostream>
#include<cstdlib>
#include<iomanip> ///setprecision(n de presicion)
#define pi 3.141592

using namespace std;


/*===============Primera Funcion Sobrecargada=====================*/
void Induccion(int capa, int frec)
{ 

float w = 2	* pi * frec;	
float l;

l = 1/ ((w * w) * capa);

cout <<"\n El valor de la Inductancia es: "<< l <<" nH"<< endl <<endl;

}
/*===============================================================*/

/*=================Segunda Funcion Sobrecargada===================*/
void Induccion(float condes, int frec)
{ 


float w = 2	* pi * frec;	
float l;

l = 1/ ((w * w) * condes);

cout <<"\n El valor de la Inductancia es: "<<setprecision(2)<< l <<" H"<< endl <<endl;


}//fin de funcion
/*===============================================================*/
	

int main(int argc, char* argv[])
{

int capa, frec,num=0;;
float condes;
float vec[num];


		cout <<"\n Introduzca el valor del capa en uF [como valor entero]: ";
		cin >>capa;

		vec[num] = capa;
		num++;

		cout <<"\n Introduzca la Frecuencia en KHz [Como valor entero]: ";
		cin >>frec; 		
		Induccion(capa, frec); //Primera carga

		cout <<"\n Introduzca el valor del capa en F [como notacion cientifica ej: 1e-6]: ";
		cin >>condes;

		vec[num]= condes;
		num++;

		Induccion(condes, frec); //segunda Carga
		
 		for(int i = 0; i < num; i ++)			
			cout <<" Valor de los Capacitores es: "<< vec[i] << endl;

return EXIT_SUCCESS;
}



