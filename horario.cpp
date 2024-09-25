#include "horario.h"

horario::horario() {
    string dias[] = {"Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};

    string horasDisponibles[] = {"8:00", "9:00", "10:00", "11:00", "12:00", "13:00", "14:00", "15:00", "16:00", "17:00", "18:00", "19:00"};

    for (int i = 0; i < 6; ++i) {
        for (int j = 0; j < 12; ++j) {
            Hora[i][j] = horasDisponibles[j];
        }
    }
}

horario::~horario() {}

string horario::toStringHorario() {
    stringstream s;
    for (int i = 0; i < 6; ++i) {
        s << Dia[i] << " ";
    }
    s << endl;
    for (int j = 0; j < 12; ++j) { 
        for (int i = 0; i < 6; ++i) { 
            s << Hora[i][j] << "\t";
        }
        s << endl;
    }
    return s.str();
}

