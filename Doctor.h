#pragma once
#include "coleccionEspecialidad.h"
#include <string>
#include "coleccionMascotas.h"
#include "horario.h"
#include "Persona.h"

using namespace std;

class Doctor : public Persona {
private:
    horario* agenda;
    Mascota** pacientes;
    int canPacientes;
    int tamPacientes;
public:
    Doctor(string, string, int);
    ~Doctor();
    horario* getAgenda();
    coleccionMascotas* getPacientes();
    void agregarPaciente(Mascota* nuevaMascota);
    string buscarPacientes() const;
    string mostrarAgenda();
    string toString() const;
};
