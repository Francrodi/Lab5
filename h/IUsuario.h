#ifndef IUSUARIO_H_
#define IUSUARIO_H_

#include <iostream>
#include <string>
#include "Usuario.h"

using namespace std;

class IUsuario {
	public:
		virtual ~IUsuario() {};
		/* Encuentra el usuario con nickname = nickname. Si no lo encuentra, throw */
		virtual Usuario* encontrarUsuario(string nickname) = 0;
		/* Ingresa el nombre de usuario para poder iniciar sesi�n */
		virtual void inicioNick(string nickname) = 0;
		/* Corrobora que la contrase�a ingresada por el usuario sea correcta para inciar sesi�n */
		virtual bool contraseniaValida(string password) = 0;
		/* Libera la memoria empleada por el sistema */
		virtual void liberarMemoria() = 0;
		/* Comprueba si existe una sesi�n */
		virtual bool existeLogueo() = 0;
};

#endif
