#ifndef DTCINE_H_
#define DTCINE_H_

#include <string>
#include "ICollectible.h"

using namespace std;

class DtCine: public ICollectible {
private:
	int idCine;
	string direccion;

public:
	DtCine(int idCine, string direccion);
	virtual ~DtCine();
};

#endif
