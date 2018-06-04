#include <iostream>

#include "../h/ControladorUsuario.h"

using namespace std;

ControladorUsuario* ControladorUsuario::ctrlUsuario = NULL;

ControladorUsuario::ControladorUsuario() {
	// TODO Auto-generated constructor stub

}

ControladorUsuario::~ControladorUsuario() {
	// TODO Auto-generated destructor stub
}

ControladorUsuario* ControladorUsuario::getCtrlUsuario() {
	if (ctrlUsuario == NULL) {
		ctrlUsuario = new ControladorUsuario;
	}
	return ctrlUsuario;
}

void ControladorUsuario::inicioNick(string nickname) {	//incompleto
	cout << "inicio nick";
}

void ControladorUsuario::liberarMemoria() {		//incompleto
	cout << "liberar memoria";
}

bool ControladorUsuario::contraseniaValida(string password) {	//incompleto
	return true;
}

