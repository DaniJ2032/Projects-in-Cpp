/*Manipuladores de Flujo para presentar Datos*/

#include <iostream>
#include<cstdlib>
#include<iomanip>
#include<bitset>
using namespace std;

int main (){

const int n = 15;
float dato = 123.4567;

	cout << n << endl; // base 10
	cout << oct << n << endl; //Octal
	cout << hex << n << endl; //Hexadecimal
	cout << (bitset<8>) n << endl n << endl;
	cout << setw(8) << "HOLA " << endl;
	cout << setw(10); 
	cout.fill(' ');
	cout << 34 << endl;
	cout << setprecision(5) << dato << endl;

return EXIT_SUCCESS;
}	 	
