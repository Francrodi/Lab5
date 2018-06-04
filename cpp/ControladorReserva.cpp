#include "../h/ControladorReserva.h"
#include <iostream>
using namespace std;

ControladorReserva* ControladorReserva::ctrlReserva = NULL;

ControladorReserva::ControladorReserva() {		//incompleto


}

ControladorReserva::~ControladorReserva() {		//incompleto

}

ControladorReserva* ControladorReserva::getCtrlReserva() {
	if(ctrlReserva == NULL) {
		ctrlReserva = new ControladorReserva;
	}
	return ctrlReserva;
}

void ControladorReserva::confirmarReserva(bool confirmar) {		//incompleto
	cout << "confirmar reserva";
}

void ControladorReserva::elegirFuncion(int idFuncion, int cant_asientos) {		//incompleto
	cout << "elegir funcion";
}

void ControladorReserva::eliminar(Reserva r) {		//incompleto
	cout << "eliminar";
}

float ControladorReserva::ingresarBanco(EnumBanco banco) {		//incompleto
	return 0;
}

DtCosto ControladorReserva::ingresarFinanciera(string financiera) {		//incompleto
	DtCosto dc;
	return dc;
}
