#include "../h/ControladorPelicula.h"
#include <iostream>
#include <stdexcept>

ControladorPelicula* ControladorPelicula::ctrlPelicula = NULL;

ControladorPelicula::ControladorPelicula() {
	this->contadorComentarios = 0;
	this->pelicula = NULL;
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

//agregados vale
/*
DtCoemntario ControladorPelicula::eligePelicula(string titulo) {

}
*/

void ControladorPelicula::ingresaComentario(string comentario) {
	int idComentario = getcontadorComentarios();
	setcontadorComentarios(idComentario++);
//	Pelicula* p = getpelicula();
	//buscar el Comentario* con ese id?
	//p->ingresaComentario(comentario,idComentario);
}

void ControladorPelicula::usuarioResponde(int idComentarioPadre,string comentario) {
	int idComentario = getcontadorComentarios();
	setcontadorComentarios(idComentario++);
//	Pelicula* p = getpelicula();
	//buscar el Comentario* con ese idpadre?
	//p->usuarioResponde(idpadre,comentario,idComentario);
}

int ControladorPelicula::getcontadorComentarios(){
	return contadorComentarios;
}

void ControladorPelicula::setcontadorComentarios(int contadorComentarios){
	this->contadorComentarios = contadorComentarios;
}

/*
Pelicula* ControladorPelicula::getpelicula(){
//	return FIND EN LA COLECCION;
}

*/

