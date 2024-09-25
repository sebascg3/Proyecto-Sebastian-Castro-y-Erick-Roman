#include <iostream>
#include "InterfazDeUsuario.h"
#include "AdmHospital.h"
using namespace std;

int main() {
	InterfazDeUsuario interfaz;
	AdmHospital ah;
	interfaz.mostrarMenuPrincipal(ah);
	return 0;
}
