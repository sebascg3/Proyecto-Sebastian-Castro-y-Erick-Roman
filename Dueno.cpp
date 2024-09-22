#include "Dueno.h"

Dueno::Dueno(string ced, string nom,int nm) : Persona(ced, nom) {
    MascotaDueno = new coleccionMascotas(nm);
}
Dueno::~Dueno() {
    delete MascotaDueno;  
}

coleccionMascotas* Dueno::getmascotas() {
    return MascotaDueno;
}

void Dueno::setmascotas(coleccionMascotas* md) {
    MascotaDueno = md;
}

bool Dueno::agregarMascota(Mascota& nuevaMascota) {
    return MascotaDueno->ingresarMascota(nuevaMascota);
}
string Dueno::listarMascotas() const {
    return MascotaDueno->tostring();
}

Mascota* Dueno::buscarMascota(string nombreMascota) {
    return MascotaDueno->buscarMascota(nombreMascota);  
}

string Dueno::toString() const {
    stringstream s;
    s << Persona::toString();
    s << "Mascotas:\n" << listarMascotas();  // Llamar a listarMascotas
    return s.str();
}
