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

void printCargaCine(Cine* cine) {
	cout << "\tSe agrega el cine:" << endl;
	cout << "\t\tID                - " << cine->getID() << endl;
	cout << "\t\tDirección         - " << cine->getDireccion() << endl;
	cout << "\t\tPrecio de entrada - " << cine->getPrecioAsiento() << endl;
	cout << "\n";
}

void printCargaSala(Sala* sala) {
	cout << "\tSe agrega la sala:" << endl;
	cout << "\t\tID        - " << "" << endl;
	cout << "\t\tCapacidad - " << "" << endl;
	cout << "\t\tCine      - " << "" << endl;
	cout << "\n" << endl;
}

void cargarDatos() {
	/////////////////////////////////////////////////
	// TODO: Agregar los datos al programa
	Fabrica* fabrica = Fabrica::getFabrica();

	/////////////////////////////////////////////////

	cout << "Empezando la carga de datos..." << endl;

	/////////////////////////////////////////////////
	cout << "------------------------------" << endl;
	/////////////////////////////////////////////////

	// -- CINES
	// TODO: Usar controladores
	// TODO: Agregar coleccion global (Si es necesario)
	cout << "CINES" << endl;

	// C1 - 21 de Setiembre 6658 - 300
	Cine* cine1 = new Cine(1,"21 de Setiembre de 6658",300);
	printCargaCine(cine1);

	// C2 - Miguel Barreiro 4588 - 250
	Cine* cine2 = new Cine(2,"Miguel Barreiro 4588",250);
	printCargaCine(cine2);

	cout << "Se completa la carga de cines" << endl;

	/////////////////////////////////////////////////
	cout << "------------------------------" << endl;
	/////////////////////////////////////////////////

	// -- SALAS
	cout << "SALAS" << endl;

	// S11 - 20 - C1
	Sala* sala1;
	printCargaSala(sala1);

	// S12 - 60 - C1

	// S13 - 30 - C1

	// S21 - 200 - C2

	// S22 - 60 - C2

	cout << "Se completa la carga de salas" << endl;

	/////////////////////////////////////////////////
	cout << "------------------------------" << endl;
	/////////////////////////////////////////////////

	// -- PELICULAS
	cout << "PELICULAS" << endl;

	cout << "\tSe agrega la pelicula: " << endl;

	cout << "Se completa la carga de peliculas" << endl;

	/////////////////////////////////////////////////
	cout << "------------------------------" << endl;
	/////////////////////////////////////////////////

	// -- FUNCIONES
	cout << "FUNCIONES" << endl;

	cout << "\tSe agrega la funcion: " << endl;

	cout << "Se completa la carga de funciones" << endl;

	/////////////////////////////////////////////////
	cout << "------------------------------" << endl;
	/////////////////////////////////////////////////

	// -- USUARIOS
	cout << "USUARIOS" << endl;

	cout << "\tSe agrega el usuario: " << endl;

	cout << "Se completa la carga de usuarios" << endl;

	/////////////////////////////////////////////////
	cout << "------------------------------" << endl;
	/////////////////////////////////////////////////

	// -- FINANCIERAS
	cout << "FINANCIERAS" << endl;

	cout << "\tSe agrega la financiera: " << endl;

	cout << "Se completa la carga de financieras" << endl;

	/////////////////////////////////////////////////
	cout << "------------------------------" << endl;
	/////////////////////////////////////////////////

	// -- COMENTARIOS
	cout << "COMENTARIOS" << endl;

	cout << "\tSe agrega el comentario: " << endl;

	cout << "Se completa la carga de comentarios" << endl;

	/////////////////////////////////////////////////
	cout << "------------------------------" << endl;
	/////////////////////////////////////////////////

	// -- PUNTAJES
	cout << "PUNTAJES" << endl;

	cout << "\tSe agrega el puntaje: " << endl;

	cout << "Se completa la carga de puntajes" << endl;

	/////////////////////////////////////////////////
	cout << "------------------------------" << endl;
	/////////////////////////////////////////////////

	// -- RESERVAS
	cout << "RESERVAS" << endl;

	cout << "\tSe agrega la reserva: " << endl;

	cout << "Se completa la carga de reservas" << endl;

	/////////////////////////////////////////////////
	cout << "------------------------------" << endl;
	/////////////////////////////////////////////////

	cout << "Termina la carga de datos" << endl;
}

void iniciarSesion() {
	cout << "Ingrese usuario y contraseÃ±a" << endl;
	cout << "USUARIO: " << endl;

	string user = getStringInput();
	Fabrica* fabrica = Fabrica::getFabrica();
    IUsuario* interface_usuario = fabrica->getIUsuario();
    interface_usuario->inicioNick(user);
	//inicioNick(user);

	cout << "CONTRASEÑA: " << endl;
	string pass = getStringInput();
}

int main() {

	cout << "Bienvenidos al menu" << endl;

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
			cout << "Porfavor ingrese una selecciÃ³n valida\n" << endl;
			break;
		}
	} while (seleccion != 10);

	return 0;
}
