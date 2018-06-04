#ifndef H_IRELOJ_H_
#define H_IRELOJ_H_

#include "DtFecha.h"
#include "DtHorario.h"
#include "DtTiempo.h"

class IReloj {
public:
	virtual ~IReloj(){};
	virtual void modificarFecha(DtFecha fecha, DtHorario horario) = 0;
	virtual DtTiempo cosultarFecha() = 0;
};



#endif
