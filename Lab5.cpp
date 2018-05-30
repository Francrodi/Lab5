#include <iostream>

#include "../Lab5/cpp/Checks.cpp"
using namespace std;

void printMenu() {

	cout << "Bienvenidos al menu" << endl;

	int seleccion;

	do {
		cout << "[1] INICIAR SESION" << endl;
		cout << "[10] SALIR" << endl;

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

	printMenu();

	return 0;
}
