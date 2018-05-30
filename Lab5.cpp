#include <iostream>
#include "h/Const.h"

using namespace std;

bool checkPuntaje(int puntaje) {
	return (puntaje >= MIN_PUNTAJE && puntaje <= MAX_PUNTAJE);
}

bool checkMinuto(int minuto) {
	return (minuto >= MIN_MINUTO && minuto <= MAX_MINUTO);
}

bool checkHora(int hora) {
	return (hora >= MIN_HORA && hora <= MAX_HORA);
}

bool checkDia(int dia) {
	return (dia >= MIN_DIA && dia <= MAX_DIA);
}

bool checkMes(int mes) {
	return (mes >= MIN_MES && mes <= MAX_MES);
}

bool checkAnio(int anio) {
	return (anio > 0);
}

void printStart() {
	cout << "Bienvenidos al menu" << endl;
}

void printMainMenu() {
	cout << "[1] INICIAR SESION" << endl;
	cout << "[10] SALIR" << endl;
}

int getInput() {
	int input;
	cin >> input;
	return input;
}

void selectMenu() {

	printStart();

	int seleccion = 0;

	do {
		printMainMenu();

		seleccion = getInput();

		switch(seleccion) {
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		default:
			cout << "Porfavor ingrese una selección valida" << endl;
			break;
		}
	} while (seleccion != 10);
}

int main() {

	selectMenu();

	return 0;
}
