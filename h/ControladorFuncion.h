#ifndef CONTROLADORFUNCION_H_
#define CONTROLADORFUNCION_H_

#include "Funcion.h"
#include "IFuncion.h"
#include "ICollectible.h"
#include "ICollection.h"

class ControladorFuncion: public IFuncion {
	private:
		ControladorFuncion();
		static ControladorFuncion* ctrlFuncion;

		//Pseudoatributos
		ICollection * funciones;
	public:
		static ControladorFuncion* getCtrlFuncion();
		virtual ~ControladorFuncion();

		int getPrecio(int idFuncion);
		Funcion* encontrarFuncion(int idFuncion);
		void eliminar(Funcion* f);
};

#endif
