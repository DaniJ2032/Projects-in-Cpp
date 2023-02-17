///////*FORMUAL w^2 = 1/LC
//////*w = 2pi*frec
////// *L = henrios  (bobina)
///// *C = Capacitor en uf 
///// Para calcular L = 1 /(w^2*C)		 	 	

#include<iostream>
#include<cstdlib>
#include<iomanip> ///setprecision(n de presicion)
#define pi 3.141592
#define N 2


using namespace std;


/////primera sobrecarga//////
float Induccion(int capa, int frec){ 

	float w = 2	* pi * frec;	
	float l;
	
	l = 1/ ((w * w) * capa);
	return l;
	
	
}//fin de la funcion


////Funcion Induccion sobrecargada//////
float Induccion(float capa, int frec){ 

	float w = 2	* pi * frec;	
	float l;
	
	l = 1/ ((w * w) * capa);
	return l;
	
}//fin de funcion

	

int main(int argc, char* argv[]){
		
	int frec;
	float capa;
	int capa1;
	int opcion;
	float array_capa [N];
	int array_capa1 [N];
	int cont = 0;
	int cont_uF = 0;
	int cont_F = 0;
		
	while(cont < N){
		cout <<"Ingrese la opcion con la cual ingresara los valores 1-uF  2-F: ";
		cin >> opcion;
			
		cout <<"\n Introduzca la Frecuencia: ";
		cin >> frec; 
			
		if(opcion == 1){
			cout <<"\n Introduzca el valor del capacitor: ";
			cin >> capa1;
			cout << endl;
			cout <<"\nEl valor del inductor es de: " << Induccion(capa1, frec) << " nH" << endl; 
			array_capa1[cont_uF] = capa1;
			cont_uF ++;
		}
			
		if(opcion == 2){
			cout <<"\n Introduzca el valor del capacitor: ";
			cin >> capa;
			cout << endl;
			cout <<"El valor del inductor es de: " << Induccion(capa, frec) << " H" << endl;
			array_capa[cont_F] = capa;
			cont_F ++;
		}
		
		cont++;	
	}
	
	
	//imprime los valores guardados de capacitores en Faradios
	if (cont_F == 0){	
		cout << "No se ingresaron capacitores en Faradios" << endl;
		
	}
	else{
		cout << endl;
		cout << "Capacitores en F" << endl;
		for (int i = 0; i < cont_F; i++){
			cout << array_capa[i] << endl;
		}
	}
	
	//imprime los valores guardados de capacitores en micro Faradios
	if (cont_uF == 0){
		cout << "No se ingresaron capacitores en micro Faradios" << endl;
		
	}
	else{
		cout << endl;
		cout << "Capacitores en uF: " << endl;
		for (int j = 0; j < cont_uF; j++){
			cout << array_capa1[j] << endl;
		}
	}
	
	return EXIT_SUCCESS;
}


