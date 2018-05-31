#include "../h/Checks.h"
#include "../h/Const.h"

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
