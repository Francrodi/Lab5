#include <iostream>

#include "../h/ControladorPelicula.h"

ControladorPelicula* ControladorPelicula::ctrlPelicula = NULL;

ControladorPelicula::~ControladorPelicula() {	//incompleto

}
ControladorPelicula::ControladorPelicula(){	//incompleto

}

ControladorPelicula* ControladorPelicula::getCtrlPelicula() {
	if(ctrlPelicula == NULL) {
		ctrlPelicula = new ControladorPelicula();
	}
	return ctrlPelicula;
}

DtFuncion ControladorPelicula::elegirCine(int idCine) {	//incompleto
	DtFuncion df;
	return df;
}

string ControladorPelicula::verPeliculas() {	//incompleto
	return "test";
}

DtPelicula ControladorPelicula::seleccionaPelicula(string titulo) {		//incompleto
	DtPelicula dp("titulo", "poster", "url");
	return dp;
}
DtCine ControladorPelicula::verInformacionAdicional() {		//incompleto
	DtCine dc(0, "direccion");
	return dc;
}

Funcion* ControladorPelicula::encontrarFuncion(int idFuncion) {		//incompleto
	Funcion* f = new Funcion();
	return f;
}

void ControladorPelicula::olvidarPelicula() {		//incompleto

}

void ControladorPelicula::eligePelicula(string titulo) {		//incompleto

}

