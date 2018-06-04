#include <iostream>

#include "../h/ControladorReloj.h"

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
	DtFecha f(0,0,0);
	DtHorario h(0,0);
	DtTiempo dt(f, h);
	return dt;
}
