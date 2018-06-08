#include "../h/Debito.h"

Debito::Debito(EnumBanco banco){
	this->banco = banco;
}

Debito::~Debito(){

}

float Debito::getPrecioTotal(int precio_asiento, int cant_asientos){
    return precio_asiento*cant_asientos;
}

EnumBanco Debito::getbanco(){
    return banco;
}
