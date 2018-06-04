#include "../h/DtFuncion.h"

DtFuncion::DtFuncion() {	//constructor por defecto
	this->idFuncion = 0;
}

DtFuncion::DtFuncion(int id, DtHorario horario, DtFecha fecha) {
	this->idFuncion = id;
	this->horario = horario;
	this->fecha = fecha;
}

DtFuncion::~DtFuncion() {

}

