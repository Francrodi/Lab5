#ifndef DTTIEMPO_H_
#define DTTIEMPO_H_
#include "DtFecha.h"
#include "DtHorario.h"

class DtTiempo {
	public:
		DtTiempo(DtFecha fecha, DtHorario hora);
		virtual ~DtTiempo();
	private:
		DtFecha fecha;
		DtHorario hora;
};

#endif
