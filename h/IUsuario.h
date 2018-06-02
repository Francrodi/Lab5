#ifndef IUSUARIO_H_
#define IUSUARIO_H_

#include <iostream>
#include <string>

using namespace std;

class IUsuario {
public:
	IUsuario();
	virtual ~IUsuario();
	virtual void inicioNick(string nickname) = 0;
	virtual bool contraseniaValida(string password) = 0;
	virtual void liberarMemoria() = 0;
};

#endif
