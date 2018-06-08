#include "../h/ControladorReloj.h"
#include <iostream>

ControladorReloj* ControladorReloj::ctrlReloj = NULL;

ControladorReloj::ControladorReloj() {


}

ControladorReloj::~ControladorReloj() {

}

ControladorReloj* ControladorReloj::getCtrlReloj() {
	if(ctrlReloj == NULL) {
		ctrlReloj = new ControladorReloj;
	}
	return ctrlReloj;
}
