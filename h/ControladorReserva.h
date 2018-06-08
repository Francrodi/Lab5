#ifndef CONTROLADORRESERVA_H_
#define CONTROLADORRESERVA_H_
#include "IReserva.h"
#include "Const.h"

class ControladorReserva: public IReserva {
	private:
		ControladorReserva();
		static ControladorReserva* ctrlReserva;
	public:
		static ControladorReserva* getCtrlReserva();
		virtual ~ControladorReserva();
		//void elegirFuncion(int idFuncion, int cant_asientos);
		//float ingresarBanco(EnumBanco banco);
		//DtCosto ingresarFinanciera(string financiera);
		//void confirmarReserva(bool confirmar);
		//void eliminar(Reserva r);
};

#endif /* CONTROLADORRESERVA_H_ */
