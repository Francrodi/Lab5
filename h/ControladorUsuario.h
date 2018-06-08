#ifndef CONTROLADORUSUARIO_H_
#define CONTROLADORUSUARIO_H_

#include "IUsuario.h"
#include "ICollectible.h"
#include "ICollection.h"

class ControladorUsuario: public IUsuario {
	private:
		ControladorUsuario();
		static ControladorUsuario* ctrlUsuario;

		//Pseudoatributos
		Usuario * usuarioLogueado;
		ICollection * usuarios;
	public:
		static ControladorUsuario* getCtrlUsuario();
		virtual ~ControladorUsuario();

		/* Encuentra el usuario con nickname = nickname. Si no lo encuentra, throw */
		Usuario* encontrarUsuario(string nickname);
		/* Ingresa el nombre de usuario para poder iniciar sesi�n */
		void inicioNick(string nickname);
		/* Corrobora que la contrase�a ingresada por el usuario sea correcta para inciar sesi�n */
		bool contraseniaValida(string password);
		/* Libera la memoria empleada por el sistema */
		void liberarMemoria();
		/* Comprueba si existe una sesi�n */
		bool existeLogueo();
};

#endif /* CONTROLADORUSUARIO_H_ */
