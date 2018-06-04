#ifndef DTCINE_H_
#define DTCINE_H_

#include <string>

using namespace std;

class DtCine {
private:
	int idCine;
	string direccion;

public:
	DtCine(int idCine, string direccion);
	virtual ~DtCine();
};

#endif
