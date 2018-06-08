#include "../h/Cine.h"

Cine::Cine(int idCine, string direccion, int precio_asiento) : ICollectible() {
	this->idCine = idCine;
	this->direccion = direccion;
	this->precio_asiento = precio_asiento;

	//Pseudoatributo
	this->salas = NULL;
	this->peliculas = NULL;
}

Cine::~Cine() {
	this->salas->~ICollection();
	this->peliculas->~ICollection();
}

int Cine::getID() {
	return this->idCine;
}

int Cine::getPrecioAsiento() {
	return this->precio_asiento;
}

string Cine::getDireccion() {
	return this->direccion;
}

DtCine* Cine::getInfoCine() {
	return new DtCine(this->idCine, this->direccion);
}
