#include "../h/ControladorUsuario.h"
#include "../h/List.h"
#include <iostream>

ControladorUsuario* ControladorUsuario::ctrlUsuario = NULL;

ControladorUsuario::ControladorUsuario() {
	this->usuarioLogueado = NULL;
	this->usuarios = new List();
}

ControladorUsuario::~ControladorUsuario() {
	this->usuarios->~ICollection();
}

ControladorUsuario* ControladorUsuario::getCtrlUsuario() {
	if (ctrlUsuario == NULL) {
		ctrlUsuario = new ControladorUsuario();
	}
	return ctrlUsuario;
}

Usuario* ControladorUsuario::encontrarUsuario(string nickname){
	IIterator * it = this->usuarios->getIterator(); //la operacion getIterator hace un new
	Usuario * usuario;
	bool existeUsuario = false;
	while(it->hasCurrent() && !existeUsuario){
		usuario = dynamic_cast<Usuario*>(it->getCurrent()); //Esto es porque it->getCurrent() devuelve un ICollectible que es una generalización de Usuario
		if(usuario->getNickname() == nickname)
			existeUsuario = true;
		it->next();
	}
	delete it; //borro la memoria creada por el getIterator
	if(!existeUsuario)
		throw invalid_argument("El nickname ingresado no pertenece a ningún usuario registrado.");
	else
		return usuario;
}

void ControladorUsuario::inicioNick(string nickname){
	Usuario* usuario = encontrarUsuario(nickname);
	this->usuarioLogueado = usuario;
}

bool ControladorUsuario::contraseniaValida(string password){
	if(this->usuarioLogueado != NULL)
		return this->usuarioLogueado->compararPassword(password);
	else
		return false;
}

void ControladorUsuario::liberarMemoria(){
	this->usuarioLogueado = NULL;
}

bool ControladorUsuario::existeLogueo(){
	return this->usuarioLogueado == NULL;
}
