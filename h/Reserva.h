#ifndef RESERVA_H_
#define RESERVA_H_

#include "ICollectible.h"
#include "ICollection.h"

using namespace std;

class Reserva: public ICollectible {
private:
	int cant_asientos;
	float costo;

public:
	Reserva(int, float);
	virtual ~Reserva();
};

#endif
