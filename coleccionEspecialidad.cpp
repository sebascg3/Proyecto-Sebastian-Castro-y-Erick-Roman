#include "coleccionEspecialidad.h"
#define maximo 40
coleccionEspecialidad::coleccionEspecialidad() {
	tam = maximo;
	can = 0;
	Especialidades = new Especialidad * [tam];
}
coleccionEspecialidad::~coleccionEspecialidad() {
	delete[] Especialidades;
}
bool coleccionEspecialidad::Insertarespecialidad(Especialidad& nuevaesp) {
	for (int i = 0; i < can; i++) {
		if (Especialidades[i] != nullptr && Especialidades[i]->getNombreEsp() == nuevaesp.getNombreEsp()) {

			return false;

		}
	}
	if (can < tam) {

		Especialidades[can] = (Especialidad*)&nuevaesp;
		can++;
		return true;
	}
	return false;
}
string coleccionEspecialidad::mostrarEspecialidades() {
	stringstream s;
	for (int i = 0; i < can; i++) {
		if (Especialidades[i] != nullptr) {
			s  << i + 1 << " " << Especialidades[i]->getNombreEsp() << endl;

		}

	}
	return s.str();

}
string coleccionEspecialidad::mostrarDoctorporEspecialidades(string nombreesp) {
	stringstream s;

	for (int i = 0; i < can; i++) {
		if (Especialidades[i] != nullptr && Especialidades[i]->getNombreEsp() == nombreesp) {
			s << Especialidades[i]->mostrardoctoresporEspecialidad();
		}

	}
	return s.str();
}
Especialidad* coleccionEspecialidad::buscarespecialidad(string nombre) {
	for (int i = 0; i < can; i++) {
		if (Especialidades[i] != nullptr && Especialidades[i]->getNombreEsp() == nombre) {
			return Especialidades[i];
		}
	}
	return nullptr;
}