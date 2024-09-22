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
};

