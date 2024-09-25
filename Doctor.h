#pragma once

#include <string>
#include "coleccionMascotas.h"
#include "horario.h"
#include "Persona.h"

using namespace std;

class Doctor : public Persona {
private:
    horario* agenda;
    coleccionMascotas* pacientes;

public:
    Doctor(string, string);
    ~Doctor();
    horario* getagenda();
    coleccionMascotas* getMascotas();
    void setmascotas(coleccionMascotas*);
    bool ingresaMascota(Mascota& m);
    Mascota* buscarMascotaNombre(string n);
    coleccionMascotas* getmascotas();
    string toStringMascotas();
    coleccionMascotas* getpacientes();
    bool agregarpaciente(Mascota& nuevaMascota);
    string buscarPacientes();
    string mostraragenda();
    string toStringDueno();
    string toString();
    void eliminarhoracita(string, string);
    void liberarhoracita(string a, string b);
    string mostrarPacientes();
    string listarMascotas();
};
