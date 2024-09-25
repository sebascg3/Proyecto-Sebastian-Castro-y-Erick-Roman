#pragma once
#include <iostream>
#include <sstream>
#include "coleccionEspecialidad.h"
using namespace std;

class Cita {
private:
    int dia;
    string hora;
    Persona* Doctor;
    Persona* DuenoPaciente;
    string horaDecita;
    Mascota* paciente;
public:
    Cita();
    Cita(int d, string h);
    ~Cita();

    int getDia() const;
    string getHora() const;
    Persona* getDuenoPaciente();
    Mascota* getPacienteCita();
    Persona* getDoctor();
    void setDia(int d);
    void setHora(string h);

    bool chocaCon(Cita& otraCita);

    string toString() const;
};
