#include "../h/Debito.h"

Debito::Debito(){

}

Debito::~Debito(){

}

float Debito::getPrecioTotal(int precio_asiento, int cant_asientos){
    return precio_asiento*cant_asientos;
}
