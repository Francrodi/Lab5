#ifndef IPELICULA_H_
#define IPELICULA_H_

#include <string>
#include <iostream>

#include "Funcion.h"
#include "DtFuncion.h"
#include "DtPelicula.h"
#include "DtCine.h"

using namespace std;

class IPelicula {
public:
	virtual ~IPelicula();
	virtual DtFuncion elegirCine(int idCine);
	virtual void eligePelicula(string titulo);
	virtual /*SET(string)*/ string verPeliculas();
	virtual DtPelicula seleccionaPelicula(string titulo);
	virtual /*SET(DtCine)*/ DtCine verInformacionAdicional();
	virtual void olvidarPelicula();
	virtual Funcion encontrarFuncion(int idFuncion);
};

#endif
