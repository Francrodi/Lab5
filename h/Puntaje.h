#ifndef PUNTAJE_H
#define PUNTAJE_H

#include <string>
#include <iostream>
#include "ICollectible.h"
#include "ICollection.h"
#include "Const.h"
#include "Pelicula.h"
#include "Usuario.h"

using namespace std;

class Puntaje: public ICollectible {
	private:
		int puntaje;
		//pseudo atributo de la relacion entre Puntaje y Usuario
		Usuario* usuario;

	public:
		Puntaje(int, Usuario*);
		virtual ~Puntaje();
		int getPuntaje();
		Usuario* getUsuario();
		void setPuntaje(int);
	};

#endif
