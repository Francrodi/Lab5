#include "../h/DtPelicula.h"

DtPelicula::DtPelicula(string titulo, string posterurl, string sinopsis) : ICollectible() {
	this->titulo = titulo;
	this->posterurl = posterurl;
	this->sinopsis = sinopsis;

}

DtPelicula::~DtPelicula() {

}

