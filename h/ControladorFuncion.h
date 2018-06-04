#ifndef CONTROLADORFUNCION_H_
#define CONTROLADORFUNCION_H_
#include "IFuncion.h"
#include "Funcion.h"


class ControladorFuncion: public IFuncion {

	public:
		virtual ~ControladorFuncion(){};
		static ControladorFuncion* getCtrlFuncion();
		void eliminar(Funcion f);

	private:
		ControladorFuncion();
		static ControladorFuncion* ctrlFuncion;
};

#endif
