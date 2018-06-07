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
		Comentario* comentarioPadre;	// Comentario al que responde
		ICollection * Comentarios;	// Respuestas de este comentario
		Usuario* usuario;	// Usuario que comentó

	public:
		Comentario(string, Usuario*, int); // (comentario, usuario, id)
		Comentario(string, Usuario*, Comentario*, int); //(comentario, usuario, comentario padre, id)
		virtual ~Comentario();
		string getComentario();
		int getIdComentario();
		Comentario* getComentarioPadre();
		ICollection* getComentarios();
		Usuario* getUsuario();

	};

#endif
