#ifndef IFUNCION_H_
#define IFUNCION_H_

#include "Funcion.h"

class IFuncion {
public:
	IFuncion();
	virtual ~IFuncion();
	virtual void eliminar(Funcion f);
};

#endif
