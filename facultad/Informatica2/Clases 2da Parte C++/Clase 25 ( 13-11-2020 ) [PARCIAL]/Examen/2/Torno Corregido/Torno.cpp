/*Cuerpo de funciones del encabezado Torno.h*/
#include "Torno.h"


/***************************************************************************/
/*Seccion para definir constructores y metodos de la "class Torno"**********/ 
/*																		   */
/***************************************************************************/


////////CONSTRUCTORES
Torno::Torno()
{		

	Hsfun = 0;
	numSerie = 784512;
	marca = "HOLZMANN MASCHINEN";
	modelo = "ED300ECO_230V";
	color = "Gris";
	nombCompleto = "Torneria del oeste S.A";

}


Torno::Torno(const Torno &p)
{		

	Hsfun = p.Hsfun;
	numSerie = p.numSerie;
	marca = p.marca;
	modelo = p.modelo;
	color = p.color;
	nombCompleto = p.nombCompleto;

}


Torno::Torno(string _marca, string _modelo, string _color, string _nombCompleto, int _numSerie, int _Hsfun)
{


	Hsfun = _Hsfun;
	numSerie = _numSerie;
	marca = _marca;
	modelo = _modelo;
	color = _color;
	nombCompleto = _nombCompleto;
}	



/////////METODOS
void Torno::imprimir()
{

	cout <<"\n Marca: "<< obtenerMarc() <<endl;
	cout<<" Modelo:"<< obtenerM() <<endl;
	cout <<" Color: "<< obtenerC() <<endl;
	cout<<" Propietario:"<< obtenerP() <<endl;
	cout <<" Numero de Serie: "<< obtenerNumSerie() <<endl;
	cout<<" Horas de Funcionamiento:"<< obtenerHsfun() <<endl;

}
/*****************************************************************************************/


/****************************************************************************************/
/*Seccion para definir constructores y metodos de la "class MantenimeintoTorno"**********/ 
/*																		                */
/****************************************************************************************/

///CONTRUCTORES
MantenimientoTorno::MantenimientoTorno()
{

	Haceite = 2000;
	Hrotatoria = 2000;
	Hcorte = 1000;
	Hultima = 0;

}


MantenimientoTorno::MantenimientoTorno(MantenimientoTorno const &p)
{

	Haceite = p.Haceite;
	Hrotatoria = p.Hrotatoria;
	Hcorte = p.Hcorte;
	Hultima = p.Hultima;

}


MantenimientoTorno::MantenimientoTorno(string _marca, string _modelo, string _color, string _nombCompleto, int _numSerie, int _Hsfun, int _Haceite, int _Hrotatoria, int _Hcorte, int _Hultima):Torno(_marca, _modelo, _color, _nombCompleto, _numSerie, _Hsfun)
{

	
	Haceite = _Haceite;
	Hrotatoria = _Hrotatoria;
	Hcorte = _Hcorte;
	Hultima = _Hultima;

}

////METODOS
void MantenimientoTorno::imprimir()
{

	Torno::imprimir(); //Mando a llamar la clase virtual del parte
	
	cout<<"**************************************************************"<<endl;	
	cout<<" Horas Faltantes Para el Cambio de Aeite: "<<obtenerHa() <<endl; 
	cout<<" Horas Faltantes Para el Cambio de Pieza Rotatoria: "<<obtenerHr() <<endl;
	cout<<" Horas Faltantes Para el Cambio de Herramienta de Corte: "<<obtenerHc() <<endl;
	cout<<" Horas Desde la Ultima reparacion de Fallas: "<<obtenerHu() <<endl;


}
/********************************************************************************************************************************************************/

//FUNCIONES AMIGAS
void MostrarDatos(Torno &tor, MantenimientoTorno &mtor) //Recibo como parametro dos objetos, C/U pertenece a una clase.
{	
	cout<<" ========================================\n";	
	cout<<" Estamos dentro de la Funcion amiga"<<endl;
	cout<<" ========================================\n"; 

	cout<<" La Marca es: "<< tor.marca <<endl;
   	cout<<" El modelo es:"<< tor.modelo <<endl;					//Dos maneras de imprimir el contenido de la clase
	cout<<" El Color del Torno es: "<< tor.color << endl;		// Directo desde los atributos privates de la clase
	cout<<" EL Num de Serie es:"<< tor.numSerie <<endl<<endl;  	

	cout<<"**************************************************************"<<endl;		
	cout<<" Horas Faltantes Para el Cambio de Aeite: "<<mtor.obtenerHa() <<endl;		
	cout<<" Horas Faltantes Para el Cambio de Pieza Rotatoria: "<<mtor.obtenerHr() <<endl;	//Con los Geters de la clase 
	cout<<" Horas Faltantes Para el Cambio de Herramienta de Corte: "<<mtor.obtenerHc() <<endl;
	cout<<" Horas Desde la Ultima reparacion de Fallas: "<<mtor.obtenerHu() <<endl<<endl;


}


