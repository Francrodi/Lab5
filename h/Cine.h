#ifndef CINE_H
#define CINE_H

#include <string>
#include <iostream>
#include "ICollectible.h"
#include "ICollection.h"
#include "DtCine.h"

using namespace std;

class Cine: public ICollectible {
	private:
		int idCine;
		string direccion;
		int precio_asiento;

		//Pseudoatributos
		ICollection* salas;
		ICollection* peliculas;
	public:
		Cine(int idCine, string direccion, int precio_asiento);
		virtual ~Cine();
		int getID();
		int getPrecioAsiento();

		DtCine* getInfoCine();
	};

#endif
