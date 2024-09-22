#include "Mascota.h"


// Constructor
Mascota::Mascota(string nom, string tipo, int edad) : nombre(nom), tipo(tipo), edad(edad){
    //historialCitas = new ColeccionCitas(); // Asigna memoria para una colección de citas
}

// Destructor
Mascota::~Mascota() {
   // delete historialCitas; // Libera la memoria de la colección de citas
}

string Mascota::getNombre() const {
    return this->nombre;
}

void Mascota::setNombre(string nom) {
    this->nombre = nom;
}

string Mascota::getTipo() const {
    return this->tipo;
}

void Mascota::setTipo(string tipo) {
    this->tipo = tipo;
}

int Mascota::getEdad() const {
    return this->edad;
}

void Mascota::setEdad(int edad) {
    this->edad = edad;
}

//string Mascota::buscarHistorial() const {
// //   return historialCitas->toString();
//}


string Mascota::toString() const {
    stringstream s;
    s << "Mascota: " << this->getNombre() << endl;
    s << "Tipo: " << this->getTipo() << endl;
    s << "Edad: " << this->getEdad() << " años" << endl;
//  s << "Historial de Citas:\n" << buscarHistorial();
    return s.str();
}
