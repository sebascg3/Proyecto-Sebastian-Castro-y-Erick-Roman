#include "ColeccionCitas.h"

ColeccionCitas::ColeccionCitas() {}


ColeccionCitas::~ColeccionCitas() {
    for (auto& cita : citas) {
        delete cita;
    }
    citas.clear();
}
void ColeccionCitas::agregarCita(Cita* cita) {
    if (cita == nullptr || cita->getDia() < 1 || cita->getDia() > 6) {
        cout << "La cita proporcionada es invalida (dia fuera de rango)." << endl;
        return;
    }
    if (hayCitaChocante(cita)) {
        cout << "La cita choca con una existente." << endl;
        return;
    }
    citas.push_back(cita);
}


void ColeccionCitas::eliminarCita(Cita* cita) {
    for (int i = 0; i < citas.size(); i++) {
        if (citas[i]->chocaCon(*cita)) {
            delete citas[i];

            for (int j = i; j < citas.size() - 1; j++) {
                citas[j] = citas[j + 1];
            }

            citas.pop_back();
            return;
        }
    }
}

bool ColeccionCitas::hayCitaChocante(Cita* cita) {
    for (const auto& c : citas) {
        if (c->chocaCon(*cita)) {
            return true;
        }
    }
    return false;
}

string ColeccionCitas::toString() const {
    stringstream s;
    for (const auto& cita : citas) {
        s << cita->toString() << endl;
    }
    return s.str();
}
