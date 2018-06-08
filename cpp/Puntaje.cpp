#include "../h/Puntaje.h"
//#include "../h/List.h"
//#include "../h/ICollection.h"
//#include "../h/ICollectible.h"

#include <string>
#include <iostream>

using namespace std;

Puntaje::Puntaje(int puntaje, Usuario* usuario) : ICollectible() {
	this->puntaje = puntaje;
	this->usuario = usuario;
}

Puntaje::~Puntaje(){

}

int Puntaje::getPuntaje(){
	return this->puntaje;
}

Usuario* Puntaje::getUsuario(){
	return this->usuario;
}

void Puntaje::setPuntaje(int puntaje){
	this->puntaje = puntaje;
}
