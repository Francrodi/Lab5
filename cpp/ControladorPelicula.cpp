#include "../h/ControladorPelicula.h"
#include <iostream>

ControladorPelicula* ControladorPelicula::ctrlPelicula = NULL;

ControladorPelicula::ControladorPelicula() {

}

ControladorPelicula::~ControladorPelicula() {

}

ControladorPelicula* ControladorPelicula::getCtrlPelicula() {
	if(ctrlPelicula == NULL) {
		ctrlPelicula = new ControladorPelicula();
	}
	return ctrlPelicula;
}

/*
DtFuncion ControladorPelicula::elegirCine(int idCine) {
	return new DtFuncion;
}

string ControladorPelicula::verPeliculas() {
	return "test";
}

DtPelicula ControladorPelicula::seleccionaPelicula(string titulo) {
	return new DtPelicula;
}
DtCine ControladorPelicula::verInformacionAdicional() {
	return new DtCine;
}

Funcion ControladorPelicula::encontrarFuncion(int idFuncion) {
	return new Funcion;
}

void ControladorPelicula::olvidarPelicula() {

}

void ControladorPelicula::eligePelicula(string titulo) {

}
*/
