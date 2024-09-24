#include "Persona.h"

Persona::Persona(string ced, string nom) :cedula(ced), nombre(nom) {}
Persona::~Persona() {}
string Persona::getCedula() { return cedula; }
string Persona::getNombre() { return nombre; }
string Persona::toString() const{
	stringstream s;
	s << "Nombre: " << nombre;
	s << "Cedula: " << cedula;
	return s.str();
}