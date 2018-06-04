#include "../h/Fabrica.h"
#include <iostream>
#include "../h/ControladorFuncion.h"
#include "../h/ControladorPelicula.h"
#include "../h/ControladorReloj.h"
#include "../h/ControladorReserva.h"
#include "../h/ControladorUsuario.h"

Fabrica* Fabrica::fabrica = NULL;

Fabrica::Fabrica() {


}

Fabrica::~Fabrica() {

}

Fabrica* Fabrica::getFabrica() {
	if (fabrica == NULL) {
		fabrica = new Fabrica();
	}
	return fabrica;
}

IFuncion* Fabrica::getIFuncion() {
	return ControladorFuncion::getCtrlFuncion();
}

IPelicula* Fabrica::getIPelicula() {
	return ControladorPelicula::getCtrlPelicula();
}

IReloj* Fabrica::getIReloj() {
	return ControladorReloj::getCtrlReloj();
}

IReserva* Fabrica::getIReserva() {
	return ControladorReserva::getCtrlReserva();
}

IUsuario* Fabrica::getIUsuario() {
	return ControladorUsuario::getCtrlUsuario();
}
