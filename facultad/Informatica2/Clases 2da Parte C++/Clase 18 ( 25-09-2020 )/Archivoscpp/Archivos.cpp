/*Manjeo de Archivos en C++
 * cin.get() -- Espera una entrada de teclado para continuar
 * cin.good() -- TRUE si la entrada fue exitosa
 * cin.bad() -- FALSE Algo Incorrecto en el istream
 * cin.fail() -- FALSE Indica la ultima operacion no se ha terminado
 * cin.clear() -- Reinicializa good a TRUE, (bad y fail) a FALSE
 * cin.ignore(12, ' ') -- Salta como maximo 12 caracteres o hasta un esp. blanco*/

#include <cstdlib>
#include <iostream>
using namespace std;


int main (int argc, char *argv[]){

int n, suma = 0, c = 0;

cout << "Ingrese un numero ctrl+D para terminar" << endl;

	while( cin >> n ){
	
		suma += n;
		c++;
		cout << "Ingrese un numero ctrl+D para terminar" <<"\n";

	}//fin del while()

	cout << "La Media Parcial es: " << (float)suma/c << endl;
	cin.clear();

	while( cin >> n ){
	
		suma += n;
		c++;
		cout << "Ingrese un numero ctrl+D para terminar" << endl;

	}//fin del while()	

	cout << "La Media total es: " << (float)suma/c << endl;
	//cin.clear();


return EXIT_SUCCESS;
}		
