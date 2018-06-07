#ifndef CONTROLADORPELICULA_H_
#define CONTROLADORPELICULA_H_
#include "IPelicula.h"
#include "Pelicula.h"
#include "DtComentario.h"
#include "ICollectible.h"

using namespace std;

class ControladorPelicula: public IPelicula{
	private:
		static ControladorPelicula* ctrlPelicula;
		ControladorPelicula();
		int contadorComentarios;
		ICollectible* peliculas;	//lista de peliculas

	public:
		static ControladorPelicula* getCtrlPelicula();
		virtual ~ControladorPelicula();
		//DtFuncion elegirCine(int idCine);
		//void eligePelicula(string titulo);
		///*SET(string)*/ string verPeliculas();
		//DtPelicula seleccionaPelicula(string titulo);
		///*SET(DtCine)*/ DtCine verInformacionAdicional();
		//void olvidarPelicula();
		//Funcion encontrarFuncion(int idFuncion);
		DtComentario eligePelicula(string);  //TIENE QUE GUARDAR EN MEMORIA LA PELICULA*
		void ingresaComentario(string);		// Comenta la pelicula recordada
		void usuarioResponde(int,string);	// (id, comentario)
		int getcontadorComentarios();
		void setcontadorComentarios(int);
		//Pelicula* getpelicula(); 	// ??

};

#endif
