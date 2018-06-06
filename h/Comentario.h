#ifndef COMENTARIO_H
#define COMENTARIO_H

#include <string>
#include <iostream>
#include "ICollectible.h"
#include "ICollection.h"
#include "Const.h"
#include "Pelicula.h"
#include "Usuario.h"

using namespace std;

class Comentario: public ICollectible {
	private:
		string comentario;
		int idComentario;
		int comentarioPadre;
		//comentario de comentario
		ICollection * Comentarios;
		//pseudo atributo de la relacion entre Comentario y Usuario
		Usuario* usuario;

	public:
		Comentario(string, Usuario*);
		Comentario(string, Usuario*, int);
		virtual ~Comentario();
		string getcomentario();
		int getidComentario();
		int getcomentarioPadre();
		ICollection* getComentarios();
		Usuario* getusuario();

	};

#endif
