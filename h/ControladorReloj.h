#ifndef CONTROLADORRELOJ_H_
#define CONTROLADORRELOJ_H_
#include "IReloj.h"

class ControladorReloj: public IReloj {
private:
	static ControladorReloj* ctrlReloj;
	ControladorReloj();

public:
	static ControladorReloj* getCtrlReloj();
	virtual ~ControladorReloj();
	void modificarFecha(DtFecha fecha, DtHorario horario);
	DtTiempo cosultarFecha();
};

#endif
