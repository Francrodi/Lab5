#include "../h/Funcion.h"

Funcion::Funcion(int idFuncion, DtFecha fecha, DtHorario horario, int asientos_reservados, Sala* sala) : ICollectible() {
	this->idFuncion = idFuncion;
	this->fecha = fecha;
	this->horario = horario;
	this->asientos_reservados = asientos_reservados;

	//Pseudoatributos
	this->sala = sala;
	this->reservas = NULL;
}

Funcion::~Funcion() {
	this->reservas->~ICollection();
}

int Funcion::getID(){
	return this->idFuncion;
}

DtFecha Funcion::getFecha(){
	return this->fecha;
}

DtHorario Funcion::getHorario(){
	return this->horario;
}

int Funcion::getPrecio(){
	return this->sala->getPrecio();
}

DtFuncion* Funcion::getInfoFuncion(){
	return new DtFuncion(this->idFuncion, this->horario, this->fecha);
}

bool Funcion::checkCine(int idCine){
	return this->sala->checkCine(idCine);
}

void Funcion::agregarReserva(Reserva* r){
	this->reservas->add(r);
}

void Funcion::reservarAsientos(int cant_asientos){
	if(cant_asientos >= 0)
		this->asientos_reservados = this->asientos_reservados + cant_asientos;
	else
		throw invalid_argument("Digite una cantidad de asientos correcta.");
}
