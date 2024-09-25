#pragma once
#include <sstream>
#include "Cita.h"
#include "Mascota.h"
class ColeccionCitas {
private:
    Cita** citas;
    int can;
    int tam;

public:
    ColeccionCitas();
    ~ColeccionCitas();
    bool agregarCita(Cita* cita);
    void redimensionar();
    string mostrarCitasPorDoctor(string c);
    bool eliminarCita(Cita* cita);
    bool hayCitaChocante(Cita* cita)const;
    string mostrarcitasDuenoDoctor(string c, string nd);
    string CitasPacientes(string n);
    string toString() const;
};