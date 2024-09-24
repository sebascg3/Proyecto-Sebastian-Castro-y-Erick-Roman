#include "Especialidad.h"
Especialidad::Especialidad(string nombre):nombreEspecialidad(nombre){
	doctores = new ColeccionPersonas();

}

Especialidad::~Especialidad(){
	delete doctores;
}

string Especialidad::getNombreEsp(){
	return nombreEspecialidad;
}

ColeccionPersonas* Especialidad::getdoctores(){
	return doctores;
}

bool Especialidad::insertarDoc(Persona& nuevodoc){

	if (doctores->agregarDoctor(nuevodoc)) {
		return true;
	}

	return false;
}

string Especialidad::mostrardoctoresporEspecialidad(){
	stringstream s;
	s << doctores->mostrarDoctores() << endl;
	return s.str();

}

string Especialidad::toStringEspecialidad(){
	stringstream s;
	s << nombreEspecialidad << endl;
	return s.str();
}
