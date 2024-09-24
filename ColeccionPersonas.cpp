#include "ColeccionPersonas.h"
#define cm 1000
ColeccionPersonas::ColeccionPersonas() :can(0), tam(cm) {
	personas = new Persona * [tam];
	for (int i = 0; i < tam; i++) {
		personas[i] = nullptr;
	}
}

ColeccionPersonas::~ColeccionPersonas(){
	delete[] personas;
}

bool ColeccionPersonas::agregarDoctor(Persona& persona) {

	if (persona.getmascotas() != nullptr) {
		return false;
	}
	for (int i = 0; i < can; i++) {
		if (personas[i] != nullptr && personas[i]->getCedula() == persona.getCedula()) {
			return false;
		}
	}
	if (can < tam) {
		personas[can++] = (Persona*)&persona;
		can++;
		return true;
	}
	return false;
}

bool ColeccionPersonas::ingresarDueno(Persona& p){
	if (p.getmascotas() == nullptr) {
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
		if (personas[i] != nullptr && personas[i]->getmascotas() != nullptr) {
			s << personas[i]->toStringDueno();
			s << personas[i]->listarMascotas();
		}
	}
	return s.str();
}

string ColeccionPersonas::mostrarDoctores() {
	stringstream s;
	for (int i = 0; i < can; i++) {
		if (personas[i] != nullptr && personas[i]->getmascotas() == nullptr) {  
			s << personas[i]->toString() << endl; 
		}
	}
	return s.str();
}

Persona* ColeccionPersonas::buscarPersonaCedula(string cedula) {
	for (int i = 0; i < can; i++) {
		if (personas[i] != nullptr && personas[i]->getCedula() == cedula) {
			return personas[i]; 
		}
	}
	return nullptr;  
}

Persona* ColeccionPersonas::buscarPersonaNombre(string nombre) {
	for (int i = 0; i < can; i++) {
		if (personas[i] != nullptr && personas[i]->getNombre() == nombre) {
			return personas[i];  
		}
	}
	return nullptr; 
}