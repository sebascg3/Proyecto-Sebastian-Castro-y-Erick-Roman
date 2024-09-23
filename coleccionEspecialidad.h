#pragma once
#include "Especialidad.h"
class ColeccionEspecialidad{
private:
    Especialidad**  especialidades;
    int tam;
    int can;
public:
    ColeccionEspecialidad();
    ~ColeccionEspecialidad();
    bool agregarEspecialidad(Especialidad&);
    string mostrarEspecialidades();
	string DoctorporEspecialidades(string);
};