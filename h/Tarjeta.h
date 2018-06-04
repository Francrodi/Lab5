#ifndef TARJETA_H
#define TARJETA_H

class Tarjeta {
public:
	Tarjeta();
	virtual ~Tarjeta();
	virtual float getPrecioTotal(int precio_asiento, int cant_asientos) = 0;
};

#endif
