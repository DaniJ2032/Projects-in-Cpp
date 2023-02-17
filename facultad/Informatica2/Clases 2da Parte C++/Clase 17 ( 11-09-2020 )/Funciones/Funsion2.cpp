#include <iostream>
#include <cstdlib>
using namespace std;

void asteriscos( int fila, int columna = 3, char c='*'){
 
	
	for (int i = 0; i < fila; i++ ){	
	
		for (int j = 0; j < columna; j++ )	
			cout << c;
		//fin 2do for();
		cout << endl;		
			
	}//fin 1er for();


}//fin de funcion


int main (int argc, char *argv[]){


	asteriscos( 4 );
	cout << endl;

    asteriscos( 4, 6 );
	cout << endl << endl;

	asteriscos ( 4, 6, '@');

return EXIT_SUCCESS;
//return 0;
};//Fin del main ();


