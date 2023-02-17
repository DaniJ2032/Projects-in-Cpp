/*Uso de Funciones inline() ver como ejecutar la funcion de tiempo de ejecusion*/

#include<iostream>
#include<cstdlib>
using namespace std;
#define VolCilindro (radio*altura*pi);

const float pi = 3.141592;

/*inline float VolCilindro(float radio, float altura){

return pi*radio*altura;		
};//Fin de la funsion inline()*/		

inline float AreaCilindro( float radio, float altura){

return (2*pi*radio*altura) + (2*pi*radio*radio); 
};//Fin de funsion inline		


int main(int argc, char* argv[]){

float radio, altura, volumen, area;

	do{

		cout <<"\n\n";	
		cout << "Introduzca el valor del Radio del Cilindro: ";
		cin >> radio;

		cout << "\n" << "Valor de la Altura del cilindro ";
		cin >> altura; 	
					

	}while((radio <= 0) || (altura <= 0));	
		

		volumen = VolCilindro ( radio, altura );
		area = AreaCilindro ( radio, altura );

		cout << "Valor del Volumen del Cilindro es: " << volumen << endl
			<< "El valor del area del cilindro es: " << "( " <<area<< " )" << endl;			

		cin.get();

		
return EXIT_SUCCESS;  
};



