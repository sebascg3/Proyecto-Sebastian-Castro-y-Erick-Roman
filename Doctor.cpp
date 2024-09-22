#include "Doctor.h"

Doctor::Doctor(string nom, string ced, int t)
    : Persona(nom, ced), agenda(new horario()), tamPacientes(t), canPacientes(0) {
    pacientes = new Mascota * [tamPacientes];
    for (int i = 0; i < tamPacientes; ++i) {
        pacientes[i] = nullptr;
    }
}

Doctor::~Doctor() {
    delete agenda;
    for (int i = 0; i < canPacientes; ++i) {
        delete pacientes[i];
    }
    delete[] pacientes;
}

horario* Doctor::getAgenda() {
    return agenda;
}

coleccionMascotas* Doctor::getPacientes(){
    coleccionMascotas* coleccion = new coleccionMascotas(canPacientes);
    for (int i = 0; i < canPacientes; ++i) {
        coleccion->ingresarMascota(*pacientes[i]); // Suponiendo que agregarMascota acepta una referencia
    }
    return coleccion;
}

void Doctor::agregarPaciente(Mascota* nuevaMascota) {
    if (canPacientes < tamPacientes) {
        pacientes[canPacientes++] = nuevaMascota;
    }
    else {
        cout << "No se pueden agregar más pacientes. Límite alcanzado." << endl;
    }
}

string Doctor::buscarPacientes() const {
    stringstream s;
    for (int i = 0; i < canPacientes; ++i) {
        if (pacientes[i] != nullptr) {
            s << pacientes[i]->toString() << endl;
        }
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
    s << Persona::toString();
    s << "Pacientes:\n" << buscarPacientes();
    return s.str();
}
