#include "../h/ControladorReserva.h"
#include <iostream>

ControladorReserva* ControladorReserva::ctrlReserva = NULL;

ControladorReserva::ControladorReserva() : IReserva() {


}

ControladorReserva::~ControladorReserva() {

}

ControladorReserva* ControladorReserva::getCtrlReserva() {
	if(ctrlReserva == NULL) {
		ctrlReserva = new ControladorReserva();
	}
	return ctrlReserva;
}
