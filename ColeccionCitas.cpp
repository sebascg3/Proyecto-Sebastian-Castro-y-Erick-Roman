#include "ColeccionCitas.h"
#define cm 500
ColeccionCitas::ColeccionCitas(int t) : citas(nullptr), can(0), tam(cm) {
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
void ColeccionCitas::agregarCita(Cita* cita) {
    if (cita == nullptr || cita->getDia() < 1 || cita->getDia() > 6) {
        cout << "La cita proporcionada es invalida (dia fuera de rango)." << endl;
        return;
    }
    if (hayCitaChocante(cita)) {
        cout << "La cita choca con una existente." << endl;
        return;
    }
    citas[can++] = cita;  
}


void ColeccionCitas::eliminarCita(Cita* cita) {
    for (int i = 0; i < can; ++i) {
        if (citas[i]->chocaCon(*cita)) {  
            delete citas[i];  

            for (int j = i; j < can - 1; ++j) {
                citas[j] = citas[j + 1];
            }
            --can;  
            return;
        }
    }
}
bool ColeccionCitas::hayCitaChocante(Cita* cita) const {
    for (int i = 0; i < can; ++i) {
        if (citas[i]->chocaCon(*cita)) {
            return true;
        }
    }
    return false;
}
string ColeccionCitas::toString() const {
    stringstream s;
    for (int i = 0; i < can; ++i) {
        s << citas[i]->toString() << endl; 
    }
    return s.str();
}
