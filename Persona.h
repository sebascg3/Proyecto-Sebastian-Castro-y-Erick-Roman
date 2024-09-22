#pragma once
#include "horario.h"
#include "coleccionMascotas.h"

class Persona{
protected:
	string nombre;
	string cedula;
public:
	Persona(string, string);
	~Persona();
	string getNombre();
	string getCedula();
	virtual coleccionMascotas* getMascotas() = 0;
	virtual string toStringMascotas() = 0;
	virtual string toStringDueno() = 0;

	string toString();
};