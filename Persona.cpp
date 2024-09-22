#include "Persona.h"

Persona::Persona(string nom)
{
	nombre = nom;
}

Persona::~Persona()
{
}

string Persona::getNombre()
{

	return string();
}

void Persona::setNombre(string)
{
}

string Persona::toString(){
	stringstream s;
	s << "Nombre: " << nombre;
	return s.str();
}
