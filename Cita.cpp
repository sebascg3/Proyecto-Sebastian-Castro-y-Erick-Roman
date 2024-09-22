#include "Cita.h"

Cita::Cita() : dia(0), hora("Sin hora") {}

Cita::Cita(int d, string h) {
    dia = d;
    hora = h;
}

Cita::~Cita() {}

int Cita::getDia() const {
    return dia;
}

string Cita::getHora() const {
    return hora;
}

void Cita::setDia(int d) {
    dia = d;
}

void Cita::setHora(string h) {
    hora = h;
}

bool Cita::chocaCon(Cita& otraCita) {
    return dia == otraCita.getDia() && hora == otraCita.getHora();
}

string Cita::toString() const {
    stringstream s;
    s << "Dia: " << this->getDia() << ", Hora: " << this->getHora();
    return s.str();
}
