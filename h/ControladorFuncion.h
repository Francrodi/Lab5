#ifndef CONTROLADORFUNCION_H_
#define CONTROLADORFUNCION_H_

#include "IFuncion.h"
#include "Funcion.h"


class ControladorFuncion: public IFuncion {
private:
	ControladorFuncion();
	static ControladorFuncion* ctrlFuncion;

public:
	virtual ~ControladorFuncion(){};
	static ControladorFuncion* getCtrlFuncion();
	void eliminar(Funcion f);
};

#endif
