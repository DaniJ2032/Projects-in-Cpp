/*Programa que devuelve el tamaño de los datos*/
#include<iostream>
#include<cstdlib>
using namespace std;

int main (int argc, char* argv[]){


cout << "Tamaño de las Variables mas Usadas son" << "\n\n";
cout << "Tipo de Dato ( int ): " << sizeof(int) << "\n";
cout << "Tipo de Dato ( long int ): " << sizeof(long int) << "\n";
cout << "Tipo de Dato ( float ): " << sizeof(float) << "\n";
cout << "Tipo de Dato ( doble ): " << sizeof(double) << "\n";
cout << "Tipo de Dato ( long double ): " << sizeof(long double) << "\n";
cout << "Tipo de Dato ( double 20 ): " << sizeof(20) << "\n";

return EXIT_SUCCESS;
}		
