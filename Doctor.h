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
    int cantidadPacientes; 
    int capacidadPacientes; 
public:
    Doctor(string nom, Especialidad& esp);
    ~Doctor();

    string getNombre() const;
    void setNombre(string nom);
    string getEspecializacion() const;
    void setEspecializacion(Especialidad* esp);
    horario* getAgenda();

    void agregarPaciente(Mascota* nuevaMascota);
    string buscarPacientes() const;
    string mostrarAgenda();
    string toString() const;
};
