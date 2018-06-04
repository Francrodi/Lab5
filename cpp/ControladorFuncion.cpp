#include <iostream>
#include <stdio.h>

#include "../h/ControladorFuncion.h"

using namespace std;

ControladorFuncion* ControladorFuncion::ctrlFuncion = NULL;

ControladorFuncion::ControladorFuncion(){	//incompleto
	cout << "ctrlFuncion creado";
}


ControladorFuncion* ControladorFuncion::getCtrlFuncion() {
	if (ctrlFuncion == NULL) {
		ctrlFuncion = new ControladorFuncion();
	}
	return ctrlFuncion;
}

void ControladorFuncion::eliminar(Funcion f) {	//incompleto
	cout << "eliminar f";
}
