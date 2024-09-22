#pragma once
#include <iostream>
#include <sstream>

using namespace std;

class Cita {
private:
    int dia;
    string hora;

public:
    Cita();
    Cita(int d, string h);
    ~Cita();

    int getDia() const;
    string getHora() const;

    void setDia(int d);
    void setHora(string h);

    bool chocaCon(Cita& otraCita);

    string toString() const;
};
