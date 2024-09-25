#include "AdmHospital.h"

AdmHospital::AdmHospital() {
    ColEspecialidades = new coleccionEspecialidad();
    ColCitas = new ColeccionCitas();
    ColMascotas = new coleccionMascotas();
    ColPersonas = new ColeccionPersonas();
}

AdmHospital::AdmHospital(ColeccionCitas& c, coleccionEspecialidad& e, coleccionMascotas& m, ColeccionPersonas& p) {
    ColEspecialidades = &e;
    ColCitas = &c;
    ColMascotas = &m;
    ColPersonas = &p;
}

ColeccionCitas* AdmHospital::getCitas() {
    return ColCitas;
}

coleccionEspecialidad* AdmHospital::getEspecialidad() {
    return ColEspecialidades;
}

coleccionMascotas* AdmHospital::getMascotas() {
    return ColMascotas;
}

ColeccionPersonas* AdmHospital::getPersonas() {
    return ColPersonas;
}

bool AdmHospital::ingresarCitas(Cita* c) {
    return ColCitas->agregarCita(c);
}

bool AdmHospital::ingresarEspecialidad(Especialidad& e) {
    if (!ColEspecialidades->buscarespecialidad(e.getNombreEsp())) {
        ColEspecialidades->Insertarespecialidad(e);
        return true;
    }
    return false;
}

bool AdmHospital::ingresarMascotas(Mascota& m) {
    if (!ColMascotas->buscarMascota(m.getNombre())) {
        ColMascotas->ingresarMascota(m);
        return true;
    }
    return false;
}

bool AdmHospital::ingresarPersonas(Persona& p) {
    if (!ColPersonas->buscarPersonaCedula(p.getCedula())) {
        ColPersonas->agregarPersona(p);
        return true;
    }
    return false;
}

bool AdmHospital::ingresarDueno(Persona& dueno) {
    if (!ColPersonas->buscarPersonaCedula(dueno.getCedula())) {
        ColPersonas->agregarPersona(dueno);
        return true;
    }
    return false;
}

bool AdmHospital::agregarDoctor(Persona& doctor) {
    if (ColPersonas->agregarPersona(doctor)) {
        return true;
    }
    return false;
}

bool AdmHospital::buscarPersonaCedula(string cedula) {
    return ColPersonas->buscarPersonaCedula(cedula);
}

Especialidad* AdmHospital::buscarEspecialidad(string especialidad) {
    return ColEspecialidades->buscarespecialidad(especialidad);
}


bool AdmHospital::buscarPersonaNombre(string nombre) {
    return ColPersonas->buscarPersonaNombre(nombre);
}

string AdmHospital::mostrarCitasDoctores(string doctor) {
    return ColCitas->mostrarCitasPorDoctor(doctor);
}

string AdmHospital::mostrarcitasDuenoDoctor(string doctor, string dueno) {
    return ColCitas->mostrarcitasDuenoDoctor(doctor, dueno);
}

string AdmHospital::mostrarcitasporpaciente(string nombrePaciente) {
    return ColCitas->CitasPacientes(nombrePaciente);
}

string AdmHospital::mostrarespecialidades() {
    return ColEspecialidades->mostrarEspecialidades();
}

string AdmHospital::mostrarDoctorporEspecialidades(string especialidad) {
    return ColEspecialidades->mostrarDoctorporEspecialidades(especialidad);
}

string AdmHospital::mostrarDuenos() {
    return ColPersonas->mostrarDuenos();
}