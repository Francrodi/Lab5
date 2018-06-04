#ifndef IFUNCION_H_
#define IFUNCION_H_

#include "Funcion.h"

class IFuncion {
public:
	virtual ~IFuncion(){};
	virtual void eliminar(Funcion f) = 0;
};

#endif
