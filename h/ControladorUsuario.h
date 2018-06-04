#ifndef CONTROLADORUSUARIO_H_
#define CONTROLADORUSUARIO_H_
#include "IUsuario.h"

class ControladorUsuario: public IUsuario {

	public:
		static ControladorUsuario* getCtrlUsuario();
		virtual ~ControladorUsuario();
		void inicioNick(string nickname);
		bool contraseniaValida(string password);
		void liberarMemoria();

	private:
		ControladorUsuario();
		static ControladorUsuario* ctrlUsuario;
};

#endif /* CONTROLADORUSUARIO_H_ */
