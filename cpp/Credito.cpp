#include "../h/Credito.h"

Credito::Credito(float descuento, string financiera){
	this->descuento = descuento;
	this->financiera = financiera;
}

Credito::~Credito(){

}

float Credito::getPrecioTotal(int precio_asiento, int cant_asientos){
	return ((precio_asiento*cant_asientos)*(descuento/100));
}

float Credito::getdescuento(){
	return this->descuento;
}

string Credito::getfinanciera(){
	return this->financiera;
}


