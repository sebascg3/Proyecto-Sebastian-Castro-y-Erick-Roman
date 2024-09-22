#pragma once
#include "ColeccionCitas.h"
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class Mascota {
private:
    string nombre;
    string tipo;
    int edad;
public:
    Mascota(string nom, string tipo, int edad);
    ~Mascota(); 

    string getNombre() const;
    void setNombre(string nom);

    string getTipo() const;
    void setTipo(string tipo);

    int getEdad() const;
    void setEdad(int edad);
   // string buscarHistorial() const;

    string toString() const;
};
