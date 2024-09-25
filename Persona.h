#pragma once
#include "horario.h"
#include "coleccionMascotas.h"

class Persona{
protected:
	string cedula;
	string nombre;
public:
	Persona(string, string);
	virtual ~Persona();
	virtual string getNombre();
	virtual string getCedula();
	virtual coleccionMascotas* getmascotas() = 0;
	virtual string listarMascotas() = 0;
	virtual string toStringDueno() = 0;
	virtual horario* getagenda() = 0;
	virtual coleccionMascotas* getpacientes() = 0;
	virtual void setmascotas(coleccionMascotas*) = 0;
	virtual bool ingresaMascota(Mascota& m) = 0;
	virtual Mascota* buscarMascotaNombre(string n) = 0;
	virtual bool agregarpaciente(Mascota& m) = 0;
	virtual string mostrarPacientes() = 0;
	virtual void eliminarhoracita(string, string) = 0;
	virtual string mostraragenda() = 0;
	virtual void liberarhoracita(string, string) = 0;

	virtual string toString() const;
};