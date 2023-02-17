#include"Vaca.h" //Cabezera Principal del programa

Vaca::Vaca()
{

prop = "Hola";

}//fin de Funcion

Vaca::Vaca(char _nomb)
{		

prop = _nomb;

}		

Vaca::Vaca(const Vaca &va)
{

prop = va.prop;

}		

void Vaca::IngresaProp( char _nomb)
{

prop = _nomb;		

}

void Vaca::VerProp()
{		

cout << "Nombre: " << Getprop << endl;		

}





