#ifndef DTHORARIO_H_
#define DTHORARIO_H_

class DtHorario {
private:
	int minuto;
	int hora;

public:
	DtHorario();
	DtHorario(int, int);
	virtual ~DtHorario();
	int getHora();
	int getMinuto();
};

#endif
