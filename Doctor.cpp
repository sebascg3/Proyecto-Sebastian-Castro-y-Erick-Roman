#include "Doctor.h"

Doctor::Doctor(string nom, Especialidad& esp) : Persona(nom), agenda(new horario()), capacidadPacientes(5), cantidadPacientes(0) {
    especializacion = &esp;
    pacientes = new Mascota * [capacidadPacientes];
}

Doctor::~Doctor() {
    delete agenda;
    for (int i = 0; i < cantidadPacientes; ++i) {
        delete pacientes[i];
    }
    delete[] pacientes;
}

string Doctor::getNombre() const {
    return this->nombre;
}

void Doctor::setNombre(string nom) {
    this->nombre = nom;
}

string Doctor::getEspecializacion() const {
    return this->especializacion->getNombre();
}

void Doctor::setEspecializacion(Especialidad* esp) {
    this->especializacion = esp;
}

horario* Doctor::getAgenda() {
    return agenda;
}

void Doctor::agregarPaciente(Mascota* nuevaMascota) {
    if (cantidadPacientes == capacidadPacientes) {
        redimensionarPacientes();  // Redimensionar si es necesario
    }
    pacientes[cantidadPacientes++] = nuevaMascota;
}

void Doctor::redimensionarPacientes() {
    int nuevaCapacidad = capacidadPacientes * 2;
    Mascota** nuevoArreglo = new Mascota * [nuevaCapacidad];
    for (int i = 0; i < cantidadPacientes; ++i) {
        nuevoArreglo[i] = pacientes[i];
    }
    delete[] pacientes;
    pacientes = nuevoArreglo;
    capacidadPacientes = nuevaCapacidad;
}

string Doctor::buscarPacientes() const {
    stringstream s;
    for (int i = 0; i < cantidadPacientes; ++i) {
        s << pacientes[i]->toString() << endl;
    }
    return s.str();
}

string Doctor::mostrarAgenda() {
    stringstream s;
    s << agenda->mostrarHorario();
    return s.str();
}

string Doctor::toString() const {
    stringstream s;
    s << "Doctor: " << this->getNombre() << endl;
    s << "Especialización: " << this->getEspecializacion() << endl;
    s << "Pacientes:\n" << buscarPacientes();
    return s.str();
}
