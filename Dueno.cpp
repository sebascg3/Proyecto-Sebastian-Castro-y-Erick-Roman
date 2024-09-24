#include "Dueno.h"

Dueno::Dueno(string ced, string nom) : Persona(ced, nom) {
    MascotaDueno = new coleccionMascotas();
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

bool Dueno::ingresaMascota(Mascota& nuevaMascota) {
    return MascotaDueno->ingresarMascota(nuevaMascota);
}
string Dueno::listarMascotas() {
    return MascotaDueno->tostring();
}

Mascota* Dueno::buscarMascotaNombre(string nombreMascota) {
    return MascotaDueno->buscarMascota(nombreMascota);  
}

string Dueno::toString()  {
    stringstream s;
    s << Persona::toString();
    s << "Mascotas:\n" << listarMascotas();  
    return s.str();
}
string Dueno::toStringDueno() {
    stringstream s;
    s << Persona::toString();
    return s.str();
}

coleccionMascotas* Dueno::getpacientes() { return nullptr; }
void Dueno::agregarpaciente(Mascota& m) {}
string Dueno::mostrarPacientes() { return ""; }
void Dueno::eliminarhoracita(string, string) {}
string Dueno::mostraragenda() { return ""; }
void Dueno::liberarhoracita(string d, string) {}


horario* Dueno::getagenda()
{
    return nullptr;
}
