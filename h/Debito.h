#ifndef DEBITO_H
#define DEBITO_H

#include "Tarjeta.h"
#include "Const.h"

class Debito : public Tarjeta {
private:
	EnumBanco banco;

public:
	Debito(EnumBanco);
	virtual ~Debito();
	float getPrecioTotal(int precio_asiento, int cant_asientos);
	EnumBanco getbanco();
};

#endif
