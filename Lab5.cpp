#include <iostream>

#include "h/Checks.h"
#include "h/Const.h"
#include "h/Fabrica.h"

#include "h/IUsuario.h"

using namespace std;

int getIntInput() {
	int input;
	cin >> input;
	return input;
}

string getStringInput() {
	string input;
	cin >> input;
	return input;
}

void printStart() {
	cout << "Bienvenidos al menu" << endl;
}

void printMainMenu() {
	cout << "[1] CARGAR DATOS"     << endl;
	cout << "[2] INICIAR SESION"   << endl;
	cout << "[3] DEFAULT XXXXXXXX" << endl;
	cout << "[4] DEFAULT XXXXXXXX" << endl;
	cout << "[5] DEFAULT XXXXXXXX" << endl;
	cout << "[6] DEFAULT XXXXXXXX" << endl;
	cout << "[7] DEFAULT XXXXXXXX" << endl;
	cout << "[8] DEFAULT XXXXXXXX" << endl;
	cout << "[9] DEFAULT XXXXXXXX" << endl;
	cout << "[10] SALIR" << endl;
	cout << "Ingrese opcion: ";
}

void cargarDatos() {
	cout << "Empezando la carga de datos..." << endl;
	cout << "------------------------------" << endl;

	/////////////////////////////////////////////////

	// -- CINES
	int contCine;
	cout << "CINES" << endl;

	cout << "\tSe agrega el cine: " << endl;

	// -- SALAS
	int contSala;
	cout << "SALAS" << endl;

	cout << "\tSe agrega la sala: " << endl;

	// -- PELICULAS
	int contPelicula;
	cout << "PELICULAS" << endl;

	cout << "\tSe agrega la pelicula: " << endl;

	// -- FUNCIONES
	int contFuncion;
	cout << "FUNCIONES" << endl;

	cout << "\tSe agrega la funcion: " << endl;

	// -- USUARIOS
	int contUsuarios;
	cout << "USUARIOS" << endl;

	cout << "\tSe agrega el usuario: " << endl;

	// -- FINANCIERAS
	int contFinancieras;
	cout << "FINANCIERAS" << endl;

	cout << "\tSe agrega la financiera: " << endl;

	// -- COMENTARIOS
	int contComentarios;
	cout << "COMENTARIOS" << endl;

	cout << "\tSe agrega el comentario: " << endl;

	// -- PUNTAJES
	int contPuntajes;
	cout << "PUNTAJES" << endl;

	cout << "\tSe agrega el puntaje: " << endl;

	// -- RESERVAS
	int contReservas;
	cout << "RESERVAS" << endl;

	cout << "\tSe agrega la reserva: " << endl;

	/////////////////////////////////////////////////

	cout << "Termina la carga de datos" << endl;
}

void iniciarSesion() {
	cout << "Ingrese usuario y contraseña" << endl;
	cout << "USUARIO: " << endl;

	string user = getStringInput();
	Fabrica* fabrica = Fabrica::getFabrica();
    IUsuario* interface_usuario = fabrica->getIUsuario();
    interface_usuario->inicioNick(user);
	//inicioNick(user);

	cout << "CONTRASEÑA: " << endl;
	string pass = getStringInput();
}

void selectMenu() {

	printStart();

	int seleccion = 0;

	do {
		printMainMenu();

		seleccion = getIntInput();

		switch(seleccion) {
		case 1:
			cargarDatos();
			break;
		case 2:
			iniciarSesion();
			break;
		case 3:
			break;
		case 10:
			cout << "Terminando programa" << endl;
			cout << "-------------------" << endl;
			break;
		default:
			cout << "Porfavor ingrese una selección valida\n" << endl;
			break;
		}
	} while (seleccion != 10);
}

int main() {

	selectMenu();

	return 0;
}
