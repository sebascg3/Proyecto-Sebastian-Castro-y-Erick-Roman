#pragma once
#include "Especialidad.h"
#include "coleccionEspecialidad.h"
#include <string>
#include "Mascota.h"
#include "horario.h"
#include <vector>
using namespace std;

class Doctor {
private:
    string nombre;
    horario* agenda;
    Especialidad* especializacion;
    vector<Mascota*> pacientes;
public:
    Doctor(string nom, Especialidad& esp);

    string getNombre()const;
    void setNombre(string nom);
    string getEspecializacion()const; 
    void setEspecializacion(Especialidad* esp);
    horario* getAgenda();

    void agregarPaciente(Mascota* nuevaMascota);
    string buscarPacientes() const;

    string mostrarAgenda();
    string toString()const;
};