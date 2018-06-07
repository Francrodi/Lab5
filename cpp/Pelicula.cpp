#include "../h/Pelicula.h"
#include "../h/List.h"

Pelicula::Pelicula(string titulo, string posterurl, string sinopsis, int duracion_min, int promedio_puntaje) : ICollectible() {
	this->titulo = titulo;
	this->posterurl = posterurl;
	this->sinopsis = sinopsis;
	this->duracion_min = duracion_min;
	this->promedio_puntaje = promedio_puntaje;

	//Pseudoatributos
	this->cines = NULL;
	this->funciones = NULL;
}

Pelicula::~Pelicula() {
	this->cines->~ICollection();
	this->funciones->~ICollection();
}

string Pelicula::getTitulo(){
	return this->titulo;
}

string Pelicula::getPosterURL(){
	return this->posterurl;
}

string Pelicula::getSinopsis(){
	return this->sinopsis;
}

DtPelicula* Pelicula::getDatos() {
	return new DtPelicula(this->titulo, this->posterurl, this->sinopsis);
}

ICollection* Pelicula::getCines(){
	IIterator* it = this->cines->getIterator(); //la operacion getIterator hace un new
	ICollection* coleccionDtCine = new List();
	Cine* cine;
	DtCine* ptrDtCine;
	while(it->hasCurrent()){
		cine = dynamic_cast<Cine*>(it->getCurrent());
		ptrDtCine = cine->getInfoCine();
//		coleccionDtCine->add(ptrDtCine);
		it->next();
	}
	delete it; //borro la memoria creada por el getIterator

	return coleccionDtCine;
}

ICollection* Pelicula::getFunciones(int idCine){
	IIterator* it = this->funciones->getIterator(); //la operacion getIterator hace un new
	ICollection* coleccionDtFuncion = new List();
	Funcion* funcion;
	DtFuncion* ptrDtFuncion;
	while(it->hasCurrent()){
		funcion = dynamic_cast<Funcion*>(it->getCurrent()); //Esto es porque it->getCurrent() devuelve un ICollectible que es una generalización de Función
		if(funcion->checkCine(idCine)){
				//ptrDtFuncion = (DtFuncion*)malloc(sizeof(DtFuncion*));
			ptrDtFuncion = funcion->getInfoFuncion();
			coleccionDtFuncion->add(ptrDtFuncion);
		}
		it->next();
	}
	delete it; //borro la memoria creada por el getIterator

	return coleccionDtFuncion;
}

//agregado vale
void Pelicula::ingresaComentario(string comentario,int idComentario) {

}

void Pelicula::usuarioResponde(int idpadre,string comentario,int idComentario) {
	//constructor de comentario
}


