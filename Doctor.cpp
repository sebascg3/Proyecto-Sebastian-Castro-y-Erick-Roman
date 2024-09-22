#include "Doctor.h"

Doctor::Doctor(string nom, Especialidad& esp) : nombre(nom), especializacion(&esp) {
    agenda = new horario();
}

string Doctor::getNombre() const{
    return this->nombre;
}

void Doctor::setNombre(string nom) {
    this->nombre = nom;
}

string Doctor::getEspecializacion() const{
    return this->especializacion->getNombre();
}
void Doctor::setEspecializacion(Especialidad* esp) {
    this->especializacion = esp;
}

horario* Doctor::getAgenda()
{
    return agenda;
}

void Doctor::agregarPaciente(Mascota* nuevaMascota){
    pacientes.push_back(nuevaMascota);
}

string Doctor::buscarPacientes() const{
    stringstream s;
    for (auto& mascota : pacientes) {
        s << mascota->toString() << endl;
    }
    return s.str();
}
string Doctor::mostrarAgenda() {
    stringstream s;
    s << agenda->mostrarHorario();
    return s.str();
}
string Doctor::toString()const{
    stringstream s;
    s << "Doctor: " << this->getNombre() << endl;
    s << "Especialización: " << this->getEspecializacion() << endl;
    s << "Pacientes:\n" << buscarPacientes();
    return s.str();
}
