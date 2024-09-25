#include "Doctor.h"
#define cm 100

Doctor::Doctor(string ced, string nom) : Persona(ced, nom), agenda(new horario()),pacientes(new coleccionMascotas()){

}
  
Doctor::~Doctor() {
    delete agenda;
    
}

horario* Doctor::getagenda() {
    return agenda;
}

coleccionMascotas* Doctor::getMascotas() {
    return nullptr;
}

string Doctor::toStringMascotas() {
    stringstream s;
   s<< pacientes->tostring();
    
    return s.str();
}

coleccionMascotas* Doctor::getpacientes(){
    return pacientes;
}

string Doctor::toStringDueno() {
    return "";
}

bool Doctor::agregarpaciente(Mascota& nuevaMascota) {
    pacientes->ingresarMascota(nuevaMascota);
}

string Doctor::buscarPacientes()  {
    stringstream s;
    
    return s.str();
}

string Doctor::mostraragenda() {
    stringstream s;
    s << agenda->toStringHorario();
    return s.str();
}

string Doctor::toString()  {
    stringstream s;
    s << Persona::toString();
    s << "Pacientes:\n" << buscarPacientes();
    return s.str();
}
void  Doctor::eliminarhoracita(string a, string b) {
//
}
void Doctor::liberarhoracita(string a, string b) {
    //
}
string Doctor::mostrarPacientes() {
    stringstream s;
    s << pacientes->tostring();
    return s.str();

}
string Doctor::listarMascotas() {
    return "";
}
void Doctor::setmascotas(coleccionMascotas*) {}
bool Doctor::ingresaMascota(Mascota& m) { return false; }
Mascota* Doctor::buscarMascotaNombre(string n) { return nullptr; }
coleccionMascotas* Doctor::getmascotas() { return nullptr; }