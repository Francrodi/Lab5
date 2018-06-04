#ifndef DTTIEMPO_H_
#define DTTIEMPO_H_
#include "DtFecha.h"
#include "DtHorario.h"

class DtTiempo {
	public:
		DtTiempo();
		virtual ~DtTiempo();
	private:
		DtFecha fecha;
		DtHorario hora;
};

#endif
