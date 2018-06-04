#ifndef DTCOSTO_H_
#define DTCOSTO_H_

class DtCosto {
private:
	float costo;
	float descuento;

public:
	DtCosto(float costo, float descuento);
	virtual ~DtCosto();
};

#endif
