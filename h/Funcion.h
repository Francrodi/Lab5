#ifndef FUNCION_H_
#define FUNCION_H_

#include "DtFuncion.h"
#include "Reserva.h"
#include "Sala.h"

class Funcion: public ICollectible {
	private:
		int idFuncion;
		DtFecha fecha;
		DtHorario horario;
		int asientos_reservados;

		//Pseudoatributos
		Sala* sala;
		ICollection* reservas;
	public:
		Funcion(int idFuncion, DtFecha fecha, DtHorario horario, int asientos_reservados, Sala* sala);
		virtual ~Funcion();
		int getID();
		DtFecha getFecha();
		DtHorario getHorario();

		int getPrecio();
		DtFuncion* getInfoFuncion();
		bool checkCine(int idCine);
		void agregarReserva(Reserva* r);
		void reservarAsientos(int cant_asientos);
};

#endif
