#include "../h/DtFuncion.h"
#include "../h/DtHorario.h"

DtFuncion::DtFuncion(): ICollectible() { //constructor por defecto
	this->idFuncion = 0;
}

DtFuncion::DtFuncion(int id, DtHorario horario, DtFecha fecha): ICollectible() {
	this->idFuncion = id;
	this->horario = horario;
	this->fecha = fecha;
}

DtFuncion::~DtFuncion() {

}

