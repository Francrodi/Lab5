#ifndef DTPELICULA_H_
#define DTPELICULA_H_

#include <iostream>
#include <string>
#include "ICollectible.h"
#include "ICollection.h"

using namespace std;

class DtPelicula: public ICollectible {
	private:
		string titulo;
		string posterurl;
		string sinopsis;
	public:
		DtPelicula(string titulo, string posterurl, string sinopsis);
		virtual ~DtPelicula();
};

#endif
