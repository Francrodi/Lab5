#include "../h/Comentario.h"
#include "../h/List.h"
//#include "../h/ICollection.h"
//#include "../h/ICollectible.h"

#include <string>
#include <iostream>

using namespace std;

Comentario::Comentario(string comentario, Usuario* usuario) : ICollectible() {
	this->comentario = comentario;
//Contador global de ids de Comentarios
/*	this->idComentario = CONTADORGLOBAL; */   this->idComentario = 2018;
	this->comentarioPadre = 0;
	this->Comentarios = new List(); //NULL?
	this->usuario = usuario;
}

Comentario::Comentario(string comentario, Usuario* usuario, int comentarioPadre) : ICollectible() {
	this->comentario = comentario;
//Contador global de ids de Comentarios
	/*	this->idComentario = CONTADORGLOBAL; */   this->idComentario = 2018;
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

int Comentario::getcomentarioPadre(){
	return this->comentarioPadre;
}

ICollection* Comentario::getComentarios(){
	return this->Comentarios;
}

Usuario* Comentario::getusuario(){
	return this->usuario;
}
