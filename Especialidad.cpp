#include "Especialidad.h"

Especialidad::Especialidad(string nom) : nombre{ nom } {}

string Especialidad::getNombre() const{
    return this->nombre;
}

void Especialidad::setNombre(string nom) {
    this->nombre = nom;
}

string Especialidad::toString() const{
    stringstream s;
    s << "Especialidad: " << this->getNombre() << endl;
    return s.str();
}
