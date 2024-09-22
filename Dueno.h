#pragma once
#include <iostream>
#include <sstream>
#include "coleccionMascotas.h"
#include "Persona.h"

class Dueno : public Persona {
private:
    coleccionMascotas* MascotaDueno;  // Colección de mascotas del dueño
public:
    Dueno(string, string);
    ~Dueno();
    coleccionMascotas* getmascotas();
    void setmascotas(coleccionMascotas*);
    bool agregarMascota(Mascota& nuevaMascota);
    string listarMascotas() const;
    Mascota* buscarMascota(string nombreMascota);
    string toString() const;
};
