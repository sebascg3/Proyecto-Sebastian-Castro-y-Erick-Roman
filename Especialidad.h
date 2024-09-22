#pragma once
#include <iostream>
#include <sstream>
#
using namespace std;

class Especialidad {
private:
    string nombre;

public:
    Especialidad(string nom);
    string getNombre() const;
    void setNombre(string nom);
    string toString() const;
};
