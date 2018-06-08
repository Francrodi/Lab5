#ifndef IFUNCION_H_
#define IFUNCION_H_

#include <iostream>
#include "Funcion.h"

using namespace std;

class IFuncion {
	public:
		virtual ~IFuncion() {};

		virtual int getPrecio(int idFuncion) = 0;
		virtual Funcion* encontrarFuncion(int idFuncion) = 0;
		virtual void eliminar(Funcion* f) = 0;
};

#endif
