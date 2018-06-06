#ifndef DTFUNCION_H_
#define DTFUNCION_H_

#include "DtFecha.h"
#include "DtHorario.h"
#include "ICollectible.h"
#include "ICollection.h"

class DtFuncion: public ICollectible {
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
