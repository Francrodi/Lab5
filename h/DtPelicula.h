#ifndef DTPELICULA_H_
#define DTPELICULA_H_

#include <iostream>
#include <string>

using namespace std;

class DtPelicula {
private:
	string titulo;
	string posterurl;
	string sinopsis;

public:
	DtPelicula();
	virtual ~DtPelicula();
};

#endif
