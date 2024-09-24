#pragma once
#include "ColeccionPersonas.h"
#include <iostream>
#include <sstream>
using namespace std;
class Especialidad{
private:

	string nombreEspecialidad;
	ColeccionPersonas* doctores;
public:
	Especialidad(string);
	~Especialidad();
	string getNombreEsp();
	ColeccionPersonas* getdoctores();
	bool insertarDoc(Persona&);
	string mostrardoctoresporEspecialidad();
	string toStringEspecialidad();
};

