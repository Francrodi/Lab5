#ifndef FABRICA_H_
#define FABRICA_H_
#include "IFuncion.h"
#include "IPelicula.h"
#include "IReloj.h"
#include "IReserva.h"
#include "IUsuario.h"

class Fabrica {
	private:
		static Fabrica* fabrica;
		Fabrica();
	public:
		static Fabrica* getFabrica();
		virtual ~Fabrica();
		IFuncion* getIFuncion();
		IPelicula* getIPelicula();
		IReloj* getIReloj();
		IReserva* getIReserva();
		IUsuario* getIUsuario();
};

#endif
