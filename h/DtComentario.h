#ifndef DTCOMENTARIO_H_
#define DTCOMENTARIO_H_

#include <iostream>
#include <string>
#include "Const.h"

using namespace std;

class DtComentario {
	private:
		string comentario;
		int idComentario;

	public:
		DtComentario(string, int);
		virtual ~DtComentario();
};

#endif
