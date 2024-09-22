#pragma once
#include "Doctor.h"
#include "Dueno.h"

class ColeccionPersonas{
private:
	Persona** personas;
	int tam;
	int can;
public:
	ColeccionPersonas(int);
	~ColeccionPersonas();
	bool agregarDoctor(Persona&);
	bool ingresarDueno(Persona&);
	Mascota* buscarMascotaNombre(string, string);
	string mostrarDuenos();
	string mostrarDoctores();
	Persona* buscarPersonaCedula(string);
	Persona* buscarPersonaNombre(string);
};

