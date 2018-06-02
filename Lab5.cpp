#include <iostream>

#include "h/Checks.h"
#include "h/Const.h"

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
	cout << "[1] INICIAR SESION" << endl;
	cout << "[2] DEFAULT XXXXXXXX" << endl;
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

void iniciarSesion() {
	cout << "Ingrese usuario y contraseña" << endl;

	cout << "USUARIO: " << endl;
	string user = getStringInput();

	cout << "CONTRASEÑA: " << endl;
	string pass = getStringInput();
}

int main() {

	printStart();

	int seleccion = 0;

	do {
		printMainMenu();

		seleccion = getIntInput();

		switch(seleccion) {
		case 1:
			iniciarSesion();
			break;
		case 2:
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

	return 0;
}
