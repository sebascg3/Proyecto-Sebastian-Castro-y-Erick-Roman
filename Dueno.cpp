#include "Dueno.h"

Dueno::Dueno(string nom, string dir, int capacidad)
    : nombre(nom), direccion(dir), cantidadMascotas(0), capacidadMascotas(capacidad) {
    mascotas = new Mascota * [capacidadMascotas];
}

Dueno::~Dueno() {
    for (int i = 0; i < cantidadMascotas; ++i) {
        delete mascotas[i];
    }
    delete[] mascotas;
}

string Dueno::getNombre() const {
    return this->nombre;
}

void Dueno::setNombre(string nom) {
    this->nombre = nom;
}

string Dueno::getDireccion() const {
    return this->direccion;
}

void Dueno::setDireccion(string dir) {
    this->direccion = dir;
}

void Dueno::agregarMascota(Mascota* nuevaMascota) {
    if (nuevaMascota == nullptr) {
        return;
    }

    if (cantidadMascotas >= capacidadMascotas) {
        capacidadMascotas *= 2;
        Mascota** temp = new Mascota * [capacidadMascotas];

        for (int i = 0; i < cantidadMascotas; ++i) {
            temp[i] = mascotas[i];
        }

        delete[] mascotas;
        mascotas = temp;
    }

        mascotas[cantidadMascotas++] = nuevaMascota;
    
}

string Dueno::listarMascotas() const {
    stringstream s;
    for (int i = 0; i < cantidadMascotas; ++i) {
        s << mascotas[i]->toString() << endl;
    }
    return s.str();
}

Mascota* Dueno::buscarMascota(string nombreMascota){
    for (int i = 0; i < cantidadMascotas; i++) {
        if (mascotas[i]->getNombre() == nombreMascota) {
            return mascotas[i]; // Retorna la mascota encontrada
        }
    }
    return nullptr; // No se encontró la mascota
}

string Dueno::toString() const {
    stringstream s;
    s << "Dueño: " << this->getNombre() << endl;
    s << "Dirección: " << this->getDireccion() << endl;
    s << this->listarMascotas();
    return s.str();
}
