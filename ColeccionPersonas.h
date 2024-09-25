#pragma once
#include "Doctor.h"
#include "Dueno.h"

class ColeccionPersonas{
private:
	Persona** personas;
	int tam;
	int can;
public:
	ColeccionPersonas();
	~ColeccionPersonas();
	bool agregarDoctor(Persona&);
	bool ingresarDueno(Persona&);
	Mascota* buscarMascotaNombre(string, string);
	bool agregarPersona(Persona& per);
	string mostrarDuenos();
	string mostrarDoctores();
	Persona* buscarPersonaCedula(string);
	string listarMascotas(string nombreDueno);
	Persona* buscarPersonaNombre(string);
};

