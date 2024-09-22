#pragma once
#include "horario.h"
#include "coleccionMascotas.h"

class Persona{
protected:
	string nombre;
public:
	Persona(string);
	~Persona();
	string getNombre();
	void setNombre();
	string toString();
	virtual horario* getagenda() = 0;
	virtual coleccionMascotas* getpacientes() = 0;
};