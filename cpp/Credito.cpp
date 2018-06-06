#include "../h/Credito.h"

Credito::Credito(){

}

Credito::~Credito(){

}

float Credito::getPrecioTotal(int precio_asiento, int cant_asientos){
	return ((precio_asiento*cant_asientos)*(descuento/100));
}
