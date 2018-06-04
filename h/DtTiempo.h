#ifndef DTTIEMPO_H_
#define DTTIEMPO_H_
#include "DtFecha.h"
#include "DtHorario.h"

class DtTiempo {
private:
	DtFecha fecha;
	DtHorario hora;

public:
	DtTiempo(DtFecha fecha, DtHorario hora);
	virtual ~DtTiempo();
};

#endif
