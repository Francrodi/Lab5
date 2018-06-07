#ifndef CREDITO_H
#define CREDITO_H

#include <string>

#include "Tarjeta.h"

using namespace std;

class Credito : public Tarjeta {
private:
    float descuento;
    string financiera;
public:
	Credito(float, string);
	virtual ~Credito();
	float getPrecioTotal(int precio_asiento, int cant_asientos);
	float getdescuento();
	string getfinanciera();

};

#endif
