#include "../h/Comentario.h"
#include "../h/List.h"
//#include "../h/ICollection.h"
//#include "../h/ICollectible.h"

#include <string>
#include <iostream>

using namespace std;

Comentario::Comentario(string comentario, Usuario* usuario, int idComentario) : ICollectible() {
	this->comentario = comentario;
	this->idComentario = idComentario;
	this->comentarioPadre = NULL;
	this->Comentarios = new List(); //NULL?
	this->usuario = usuario;
}

Comentario::Comentario(string comentario, Usuario* usuario, Comentario* comentarioPadre, int idComentario) : ICollectible() {
	this->comentario = comentario;
	this->idComentario = idComentario;
	this->comentarioPadre = comentarioPadre;
	this->Comentarios = new List(); //NULL?
	this->usuario = usuario;
}

Comentario::~Comentario(){

}

string Comentario::getcomentario(){
	return this->comentario;
}

int Comentario::getidComentario(){
	return this->idComentario;
}

Comentario* Comentario::getcomentarioPadre(){
	return this->comentarioPadre;
}

ICollection* Comentario::getComentarios(){
	return this->Comentarios;
}

Usuario* Comentario::getusuario(){
	return this->usuario;
}
