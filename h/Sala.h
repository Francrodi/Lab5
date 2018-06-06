#ifndef SALA_H
#define SALA_H

#include <string>
#include <iostream>
#include "ICollectible.h"
#include "ICollection.h"
#include "Cine.h"

using namespace std;

class Sala: public ICollectible {
	private:
		int idSala;
		int asientos;

		//Pseudoatributos
		Cine* cine;
		ICollection* funciones;
	public:
		Sala(int idSala, int asientos, Cine* cine);
		virtual ~Sala();
		int getPrecio();
		bool checkCine(int idCine);
	};

#endif
