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
	virtual ~IPelicula(){};
	virtual DtFuncion elegirCine(int idCine) = 0;
	virtual void eligePelicula(string titulo) = 0;
	virtual /*SET(string)*/ string verPeliculas() = 0;
	virtual DtPelicula seleccionaPelicula(string titulo) = 0;
	virtual /*SET(DtCine)*/ DtCine verInformacionAdicional() = 0;
	virtual void olvidarPelicula() = 0;
	virtual Funcion* encontrarFuncion(int idFuncion) = 0;
};

#endif
