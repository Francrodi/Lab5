#include <iostream>

#include "../h/ControladorPelicula.h"

ControladorPelicula* ControladorPelicula::ctrlPelicula = NULL;

ControladorPelicula::~ControladorPelicula() {	// Incompleto

}
ControladorPelicula::ControladorPelicula(){	// Incompleto

}

ControladorPelicula* ControladorPelicula::getCtrlPelicula() {
	if(ctrlPelicula == NULL) {
		ctrlPelicula = new ControladorPelicula();
	}
	return ctrlPelicula;
}

DtFuncion ControladorPelicula::elegirCine(int idCine) {	// Incompleto
	DtFuncion df;
	return df;
}

string ControladorPelicula::verPeliculas() {	// Incompleto
	return "test";
}

DtPelicula ControladorPelicula::seleccionaPelicula(string titulo) {		// Incompleto
	DtPelicula dp;
	return dp;
}
DtCine ControladorPelicula::verInformacionAdicional() {		// Incompleto
	DtCine dc;
	return dc;
}

Funcion* ControladorPelicula::encontrarFuncion(int idFuncion) {		// Incompleto
	Funcion* f = new Funcion();
	return f;
}

void ControladorPelicula::olvidarPelicula() {		// Incompleto

}

void ControladorPelicula::eligePelicula(string titulo) {		// Incompleto

}
