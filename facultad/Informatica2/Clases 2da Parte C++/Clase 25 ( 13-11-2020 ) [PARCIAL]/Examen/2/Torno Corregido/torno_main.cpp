#include "Torno.h" //Cabecera de funcion principal


int main ( int argc, char* argv[] )
{

Torno t, t1;
MantenimientoTorno mt;

////////////////////////////////// Prueba de clase Padre
t.imprimir(); //Imprimo antes de cargar valores

cout <<"\n\n";

t1.ponerC("Azul");
t1.ponerP("Daniel Juarez"); //Cargo valores
t1.ponerH( 300 );

t1.imprimir(); //Imprimo de nuevo con los valores cargados

cout <<"\n\n";
////////////////////////////////////////////////////////


/////////////////////////////// Prueba de la clase hija

mt.imprimir(); //Imprimo antes de cargar valores 

mt.ponerHa(100);
mt.ponerHr(200);
mt.ponerHc(300);
mt.ponerHu(400);

mt.imprimir();

cout<<endl <<endl;

/////////////////////////////////////////////////////

//////////////////////Probando la funcion amiga

MostrarDatos(t1, mt); //Paso los dos Objetos a la funcion amiga


return EXIT_SUCCESS;		
}//fin del main





