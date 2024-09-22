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
    ColeccionCitas(int);
    ~ColeccionCitas();
    void agregarCita(Cita* cita);
    void eliminarCita(Cita* cita);
    bool hayCitaChocante(Cita* cita)const;
    string toString() const;
};