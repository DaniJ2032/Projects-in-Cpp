#include<iostream>
#include<cstdlib>
using namespace std;

int main ( ){

int x = 9, y = 10, x_Y_y, x_or_y, x_Xor_y;

	x_Y_y = x & y;
	x_or_y = x | y; 
 	x_Xor_y = x ^ y;
	
	cout << "\n\nValor de X: " << x << "\n\n";
	cout << "Valor de y: " << y << "\n\n";
	cout << "Valor de X_Y_y " << x_Y_y << "\n\n";
	cout << "Valor de X_or_y: " << x_or_y << "\n\n";	
	cout << "Valor de X_Xor_y: " << x_Xor_y << "\n\n";

	x = x << 2;
	y = y << 2;

	cout << "x << 2 = " << x << "\n\n";
  	cout << "y << 2 = " << y << "\n\n";
	
	
return EXIT_SUCCESS;
}




