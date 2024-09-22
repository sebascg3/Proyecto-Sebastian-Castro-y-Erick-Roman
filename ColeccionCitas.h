#pragma once
#include <vector>
#include <sstream>
#include "Cita.h"
#include "Mascota.h"
class ColeccionCitas {
private:
    vector<Cita*> citas;
public:
    ColeccionCitas();
    ~ColeccionCitas();
    void agregarCita(Cita* cita);
    void eliminarCita(Cita* cita);
    bool hayCitaChocante(Cita* cita);
    string toString() const;
};