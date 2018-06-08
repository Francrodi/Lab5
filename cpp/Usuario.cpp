#include "../h/Usuario.h"
#include "../h/List.h"

#include <string>
#include <iostream>

using namespace std;

Usuario::Usuario(string nickname, string password, string imageurl, EnumUsuario tipoUsuario) : ICollectible() {
	this->nickname = nickname;
	this->password = password;
	this->imageurl = imageurl;
	this->tipoUsuario = tipoUsuario;
	//this->comentarios = new List();
	//this->puntuaciones = new List();
	this->reservas = new List();
}

Usuario::~Usuario(){

}

void Usuario::agregarReserva(Reserva* r){
	this->reservas->add(r);
}

bool Usuario::compararPassword(string password){
	if (this->password == password)
		return true;
	else
		return false;
}

/*void Usuario::eliminar(Comentario* c){
	this->comentarios->remove(c);
}*/

/*void Usuario::eliminar(Puntuacion* p){
	this->puntuaciones->remove(p);
}*/

void Usuario::eliminar(Reserva* r){
	this->reservas->remove(r);
}

string Usuario::getPassword(){
	return this->password;
}

string Usuario::getNickname(){
	return this->nickname;
}
