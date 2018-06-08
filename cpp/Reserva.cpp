#include "../h/Reserva.h"

#include <string>
#include <iostream>

using namespace std;

Reserva::Reserva(int cant_asientos, float costo) : ICollectible() {
		this->cant_asientos = cant_asientos;
		this->costo = costo;
		//this->comentarios = new List();
		//this->puntuaciones = new List();
		//this->PORQUERIAS = new List();

}

Reserva::~Reserva() {

}

