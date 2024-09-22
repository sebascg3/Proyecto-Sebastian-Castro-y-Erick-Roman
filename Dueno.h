#pragma once
#include <iostream>
#include <sstream>
#include "Mascota.h"
class Dueno{
private:
    string nombre;
    string direccion;
    Mascota** mascotas;
    int cantidadMascotas;
    int capacidadMascotas;

public:
    Dueno(string nom, string dir, int capacidad = 5);
    ~Dueno();

    string getNombre() const;
    void setNombre(string nom);

    string getDireccion() const;
    void setDireccion(string dir);

    void agregarMascota(Mascota* nuevaMascota);
    string listarMascotas() const;
    Mascota* buscarMascota(string nombreMascota);
    string toString() const;
};

