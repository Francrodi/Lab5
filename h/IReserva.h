#ifndef IRESERVA_H_
#define IRESERVA_H_

#include <string>

#include "Const.h"
#include "DtCosto.h"
#include "Reserva.h"

using namespace std;

class IReserva {
public:
	IReserva();
	virtual ~IReserva();
	virtual void elegirFuncion(int idFuncion, int cant_asientos) = 0;
	virtual float ingresarBanco(EnumBanco banco) = 0;
	virtual DtCosto ingresarFinanciera(string financiera) = 0;
	virtual void confirmarReserva(bool confirmar) = 0;
	virtual void eliminar(Reserva r) = 0;
};

#endif
