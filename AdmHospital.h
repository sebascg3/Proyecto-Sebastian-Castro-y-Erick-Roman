#pragma once
#include "ColeccionCitas.h"
#include "coleccionEspecialidad.h"
#include "ColeccionPersonas.h"
#include "coleccionMascotas.h"


class AdmHospital{
private:
	coleccionEspecialidad* ColEspecialidades;
	ColeccionCitas* ColCitas;
	coleccionMascotas* ColMascotas;
	ColeccionPersonas* ColPersonas;
public:
	AdmHospital();
	AdmHospital(ColeccionCitas&, coleccionEspecialidad&, coleccionMascotas&, ColeccionPersonas&);
	ColeccionCitas* getCitas();
	coleccionEspecialidad* getEspecialidad();
	coleccionMascotas* getMascotas();
	ColeccionPersonas* getPersonas();
	bool ingresarCitas(Cita*);
	bool ingresarEspecialidad(Especialidad&);
	bool ingresarMascotas(Mascota&);
	bool ingresarPersonas(Persona&);
	bool ingresarDueno(Persona&);
	bool agregarDoctor(Persona&);
	bool buscarPersonaCedula(string cedula);
	Especialidad* buscarEspecialidad(string especialidad);
	bool buscarPersonaNombre(string nombre);
	string mostrarCitasDoctores(string doctores);
	string mostrarcitasDuenoDoctor(string, string);
	string mostrarcitasporpaciente(string nombre);
	string mostrarespecialidades();
	string mostrarDoctorporEspecialidades(string) ;
	string mostrarDuenos();
};

