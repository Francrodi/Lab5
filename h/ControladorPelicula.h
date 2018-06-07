#ifndef CONTROLADORPELICULA_H_
#define CONTROLADORPELICULA_H_
#include "IPelicula.h"
#include "Pelicula.h"

class ControladorPelicula: public IPelicula{
	private:
		static ControladorPelicula* ctrlPelicula;
		ControladorPelicula();
		int contadorComentarios;
		Pelicula* pelicula;

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
		// SET(DtComentario) eligePelicula(string)  //TIENE QUE GUARDAR EN MEMORIA LA PELICULA*
		void ingresaComentario(string);
		void usuarioResponde(int,string);
		int getcontadorComentarios();
		void setcontadorComentarios(int);
		Pelicula* getpelicula();

};

#endif
