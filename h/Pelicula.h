#ifndef PELICULA_H_
#define PELICULA_H_

#include "Cine.h"
#include "Funcion.h"
#include "DtPelicula.h"

class Pelicula: public ICollectible {
	private:
		string titulo;
		string posterurl;
		string sinopsis;
		int duracion_min;
		int promedio_puntaje;

		//Pseudoatributos
		ICollection* cines;
		ICollection* funciones;
	public:
		Pelicula(string titulo, string posterurl, string sinopsis, int duracion_min, int promedio_puntaje);
		virtual ~Pelicula();
		string getTitulo();
		string getPosterURL();
		string getSinopsis();

		DtPelicula* getDatos();
		ICollection* getCines();
		ICollection* getFunciones(int idCine);

		void ingresaComentario(string, int);
		void usuarioResponde(int,string,int);
};

#endif
