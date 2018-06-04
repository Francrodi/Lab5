#include "../h/DtFecha.h"

DtFecha::DtFecha() {	//contstructor por defecto
	this->dia = 0;
	this->mes = 0;
	this->anio = 0;
}

DtFecha::DtFecha(int dia, int mes,int anio){
	this->dia = dia;
	this->mes = mes;
	this->anio = anio;
}

DtFecha::~DtFecha() {

}

