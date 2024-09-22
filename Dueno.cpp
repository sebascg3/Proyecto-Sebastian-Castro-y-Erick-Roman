#include "Dueno.h"

Dueno::Dueno(string nom, string ced) : Persona(nom, ced) {
    MascotaDueno = new coleccionMascotas();  // Inicializar la colección de mascotas
}

Dueno::~Dueno() {
    delete MascotaDueno;  // Liberar la memoria de la colección de mascotas
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
    s << "Dueño: " << this->getNombre() << endl;
    s << "Mascotas:\n" << listarMascotas();  // Llamar a listarMascotas
    return s.str();
}
