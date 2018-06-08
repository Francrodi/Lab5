#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include <iostream>
#include "ICollectible.h"
#include "ICollection.h"
#include "Const.h"
#include "Reserva.h"
//#include "Puntuacion.h"
//#include "Comentario.h"

using namespace std;

class Usuario: public ICollectible {
	private:
		string nickname;
		string password;
		string imageurl;
		EnumUsuario tipoUsuario;
		ICollection * reservas;
		//ICollection * puntuaciones;
		//ICollection * comentarios;
	public:
		Usuario(string, string, string, EnumUsuario);
		virtual ~Usuario();
		void agregarReserva(Reserva*);
		bool compararPassword(string);
		//void eliminar(Comentario*);
		//void eliminar(Puntuacion*);
		void eliminar(Reserva*);
		string getPassword();
		string getNickname();
	};

#endif
