#include "../h/Sala.h"

Sala::Sala(int idSala, int asientos, Cine* cine) : ICollectible() {
	this->idSala = idSala;
	this->asientos = asientos;

	//Pseudoatributo
	this->cine = cine;
	this->funciones = NULL;
}

Sala::~Sala() {
	this->funciones->~ICollection();
}

int Sala::getPrecio(){
	return this->cine->getPrecioAsiento();
}

bool Sala::checkCine(int idCine){
	return this->cine->getID() == idCine;
}
