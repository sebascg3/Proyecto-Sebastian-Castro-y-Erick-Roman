#pragma once
#include "Especialidad.h"
class coleccionEspecialidad {
private:
	Especialidad** Especialidades;
	int tam;
	int can;
public:
	coleccionEspecialidad();
	~coleccionEspecialidad();
	bool Insertarespecialidad(Especialidad&);
	string mostrarEspecialidades();
	string mostrarDoctorporEspecialidades(string);
	Especialidad* buscarespecialidad(string);
};


