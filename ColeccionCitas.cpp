#include "ColeccionCitas.h"
#define cm 50
ColeccionCitas::ColeccionCitas() : citas(nullptr), can(0), tam(cm) {
    citas = new Cita * [tam];
    for (int i = 0; i < tam; i++) {
        citas[i] = nullptr;
    }
}
ColeccionCitas::~ColeccionCitas() {
    for (int i = 0; i < can; ++i) {
        delete citas[i];  
    }
    delete[] citas;
}
bool ColeccionCitas::agregarCita(Cita* cita) {
    if (cita == nullptr || cita->getDia() < 1 || cita->getDia() > 6) {
        cout << "La cita proporcionada es inválida (día fuera de rango)." << endl;
        return false;
    }

    if (hayCitaChocante(cita)) {
        cout << "La cita choca con una existente." << endl;
        return false; 
    }

    if (can >= tam) {  
        redimensionar();  
    }

    citas[can++] = cita;  
    return true; 
}

void ColeccionCitas::redimensionar() {
    int nuevoTam = tam * 2;
    Cita** nuevoArray = new Cita * [nuevoTam];

    for (int i = 0; i < can; i++) {
        nuevoArray[i] = citas[i];
    }

    delete[] citas;
    citas = nuevoArray;
    tam = nuevoTam;
}

string ColeccionCitas::mostrarCitasPorDoctor(string c) {
    stringstream s;
    bool e{ false };

    for (int i = 0; i < can; i++) {
        if (citas[i] != nullptr && citas[i]->getDuenoPaciente()->getCedula() == c) {
            s << citas[i]->getDoctor()->toString() << endl;
            e = true;
        }
    }
    if (!e) {
        s << endl << "El dueno no tiene citas asignadas." << endl;
    }

    return s.str();
}
bool ColeccionCitas::eliminarCita(Cita* cita) {
    for (int i = 0; i < can; ++i) {
        if (citas[i]->chocaCon(*cita)) {
            delete citas[i];

            for (int j = i; j < can - 1; ++j) {
                citas[j] = citas[j + 1];
            }
            --can;
            return true;
        }
    }
    return false;
}
bool ColeccionCitas::hayCitaChocante(Cita* cita) const {
    for (int i = 0; i < can; ++i) {
        if (citas[i]->chocaCon(*cita)) {
            return true;
        }
    }
    return false;
}
string ColeccionCitas::mostrarcitasDuenoDoctor(string c, string nd) {
    stringstream s;
    bool e{ false };

    for (int i = 0; i < can; i++) {
        if (citas[i] != nullptr &&
            (citas[i]->getDuenoPaciente()->getCedula() == c && citas[i]->getDoctor()->getNombre() == nd)) {
            s << citas[i]->toString() << endl;
            e = true;
        }
    }

    if (!e) {
        s << endl << "No se encontro al duenio/doctor en el registro." << endl;
    }

    return s.str();
}

string ColeccionCitas::CitasPacientes(string n) {
    stringstream s;
    bool e{ false };
    for (int i = 0; i < can; i++) {
        if (citas[i] != nullptr) {
            if (citas[i]->getPacienteCita()->getNombre() == n) {
                s << citas[i]->toString();
                e = true;
            }
        }
        else {
            cout << endl << "El paciente no fue encontrado en el sistema." << endl;
        }
    }
    if (!e) {
        cout << endl << "El paciente no fue encontrado en el sistema." << endl;
    }
    return s.str();
}
string ColeccionCitas::toString() const {
    stringstream s;
    for (int i = 0; i < can; ++i) {
        s << citas[i]->toString() << endl; 
    }
    return s.str();
}
