#ifndef CONTROLADORPELICULA_H_
#define CONTROLADORPELICULA_H_

#include "IPelicula.h"

class ControladorPelicula: public IPelicula {
private:
	static ControladorPelicula* ctrlPelicula;
	ControladorPelicula();

public:
	static ControladorPelicula* getCtrlPelicula();
	virtual ~ControladorPelicula();
	DtFuncion elegirCine(int idCine);
	void eligePelicula(string titulo);
	/*SET(string)*/ string verPeliculas();
	DtPelicula seleccionaPelicula(string titulo);
	/*SET(DtCine)*/ DtCine verInformacionAdicional();
	void olvidarPelicula();
	Funcion* encontrarFuncion(int idFuncion);
};

#endif





