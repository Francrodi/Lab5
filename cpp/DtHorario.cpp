#include "../h/DtHorario.h"
DtHorario::DtHorario(){		//constructor por defecto 0:0
	this->hora = 0;
	this->minuto = 0;
}

DtHorario::DtHorario(int minuto, int hora) {
	this->minuto = minuto;
	this->hora = hora;
}

DtHorario::~DtHorario() {

}

int DtHorario::getHora() {
	return this->hora;
}

int DtHorario::getMinuto() {
	return this->minuto;
}
