#ifndef DTFUNCION_H_
#define DTFUNCION_H_

#include "DtFecha.h"
#include "DtHorario.h"

class DtFuncion {
private:
	int idFuncion;
	DtFecha fecha;
	DtHorario horario;

public:
	DtFuncion();
	DtFuncion(int, DtHorario, DtFecha);
	virtual ~DtFuncion();
};

#endif
