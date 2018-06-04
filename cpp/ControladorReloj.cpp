#include "../h/ControladorReloj.h"
#include <iostream>
using namespace std;

ControladorReloj* ControladorReloj::ctrlReloj = NULL;

ControladorReloj::ControladorReloj() {		//incompleto


}

ControladorReloj::~ControladorReloj() {		//incompleto

}

ControladorReloj* ControladorReloj::getCtrlReloj() { //singleton
	if(ctrlReloj == NULL) {
		ctrlReloj = new ControladorReloj;
	}
	return ctrlReloj;
}

void ControladorReloj::modificarFecha(DtFecha fecha, DtHorario horario) {		//incompleto
	cout << "modificar fecha";
}

DtTiempo ControladorReloj::cosultarFecha() {		//incompleto
	DtTiempo dt;
	return dt;
}
