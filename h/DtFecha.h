#ifndef DTFECHA_H_
#define DTFECHA_H_

class DtFecha {
private:
	int dia;
	int mes;
	int anio;

public:
	DtFecha();
	DtFecha(int dia, int mes, int anio);
	virtual ~DtFecha();
};

#endif
