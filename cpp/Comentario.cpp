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
	this->comentarioPadre = NULL;	 // Es comentario padre
	this->Comentarios = NULL;	// Arranca sin respuestas
	this->usuario = usuario;
}

Comentario::Comentario(string comentario, Usuario* usuario, Comentario* comentarioPadre, int idComentario) : ICollectible() {
	this->comentario = comentario;
	this->idComentario = idComentario;
	this->comentarioPadre = comentarioPadre;
	this->Comentarios = NULL;	// Arranca sin respuestas
	this->usuario = usuario;
}

Comentario::~Comentario(){

}

string Comentario::getComentario(){
	return this->comentario;
}

int Comentario::getIdComentario(){
	return this->idComentario;
}

Comentario* Comentario::getComentarioPadre(){
	return this->comentarioPadre;
}

ICollection* Comentario::getComentarios(){
	return this->Comentarios;
}

Usuario* Comentario::getUsuario(){
	return this->usuario;
}
