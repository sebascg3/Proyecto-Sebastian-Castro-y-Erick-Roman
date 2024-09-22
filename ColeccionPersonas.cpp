#include "ColeccionPersonas.h"

ColeccionPersonas::ColeccionPersonas(int t){
	can = 0;
	tam = t;
	personas = new Persona * [tam];
	for (int i = 0; i < tam; i++) {
		personas[i] = nullptr;
	}
}

ColeccionPersonas::~ColeccionPersonas(){
	delete[] personas;
}

bool ColeccionPersonas::agregarDoctor(Persona& p) {

	if (p.getMascotas() != nullptr) {
		return false;
	}
	for (int i = 0; i < can; i++) {
		if (personas[i] != nullptr && personas[i]->getCedula() == p.getCedula()) {
			return false;
		}
	}
	if (can < tam) {
		personas[can++] = (Persona*)&p;
		can++;
		return true;
	}
	return false;
}

bool ColeccionPersonas::ingresarDueno(Persona& p){
	if (p.getMascotas() == nullptr) {
		return false;
	}
	for (int i = 0; i < can; i++) {
		if (personas[i] != nullptr && (personas[i]->getCedula() == p.getCedula())) {
			return false;
		}
	}
	if (can < tam) {

		personas[can] = (Persona*)&p;
		can++;
		return true;
	}
	return false;

}

Mascota* ColeccionPersonas::buscarMascotaNombre(string, string){
	return nullptr;
}

string ColeccionPersonas::mostrarDuenos()
{
	stringstream s;
	for (int i = 0; i < can; i++) {
		if (personas[i] != nullptr && personas[i]->getMascotas() != nullptr) {
			s << personas[i]->toStringDueno();
			s << personas[i]->toStringMascotas();
		}
	}
	return s.str();
}
