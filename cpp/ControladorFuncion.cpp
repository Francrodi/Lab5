#include "../h/ControladorFuncion.h"
#include "../h/List.h"
#include <iostream>
#include <stdexcept> //para las excepciones

ControladorFuncion* ControladorFuncion::ctrlFuncion = NULL;

ControladorFuncion::ControladorFuncion() {
	this->funciones = new List();
}

ControladorFuncion::~ControladorFuncion() {
	this->funciones->~ICollection();
}

ControladorFuncion* ControladorFuncion::getCtrlFuncion() {
	if (ctrlFuncion == NULL) {
		ctrlFuncion = new ControladorFuncion();
	}
	return ctrlFuncion;
}

int ControladorFuncion::getPrecio(int idFuncion){
	Funcion* funcion = this->encontrarFuncion(idFuncion);
	return funcion->getPrecio();
}

Funcion* ControladorFuncion::encontrarFuncion(int idFuncion){
	IIterator * it = this->funciones->getIterator(); //la operacion getIterator hace un new
	Funcion* funcion;
	bool existeFuncion = false;
	while(it->hasCurrent() && !existeFuncion){
		funcion = dynamic_cast<Funcion*>(it->getCurrent()); //Esto es porque it->getCurrent() devuelve un ICollectible que es una generalización de Función
		if(funcion->getID() == idFuncion)
			existeFuncion = true;
		it->next();
	}
	delete it; //borro la memoria creada por el getIterator
	if(!existeFuncion)
		throw invalid_argument("El id de la función ingresado no pertenece a ninguna función registrada.");
	else
		return funcion;
}

void ControladorFuncion::eliminar(Funcion* f) {
	this->funciones->remove(f);
}

