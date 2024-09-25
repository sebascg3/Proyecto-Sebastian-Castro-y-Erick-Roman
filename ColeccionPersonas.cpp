#include "ColeccionPersonas.h"
#define cm 50

ColeccionPersonas::ColeccionPersonas() :can(0), tam(cm) {
    personas = new Persona * [tam];
    for (int i = 0; i < tam; i++) {
        personas[i] = nullptr;
    }
}

ColeccionPersonas::~ColeccionPersonas() {
    delete[] personas;
}

bool ColeccionPersonas::agregarDoctor(Persona& per) {
    for (int i = 0; i < can; i++) {
        if (personas[i] != nullptr && personas[i]->getCedula() == per.getCedula()) {
            return false;
        }
    }

    if (can < tam) {
        personas[can++] = &per;
        return true;
    }

    return false;
}

bool ColeccionPersonas::ingresarDueno(Persona& per) {
    if (per.getmascotas() == nullptr) {
        return false;
    }

    for (int i = 0; i < can; i++) {
        if (personas[i] != nullptr && personas[i]->getCedula() == per.getCedula()) {
            return false;
        }
    }

    if (can < tam) {
        personas[can++] = &per;
        return true;
    }

    return false;
}

Mascota* ColeccionPersonas::buscarMascotaNombre(string nombreDueno, string nombreMascota) {
    for (int i = 0; i < can; i++) {
        Persona* p = personas[i];
        if (p != nullptr && p->getNombre() == nombreDueno) {
            Mascota* m = p->buscarMascotaNombre(nombreMascota);
            if (m != nullptr) {
                return m;
            }
        }
    }
    return nullptr;
}

bool ColeccionPersonas::agregarPersona(Persona& per) {
    for (int i = 0; i < can; i++) {
        if (personas[i] != nullptr && personas[i]->getCedula() == per.getCedula()) {
            return false;
        }
    }

    if (can < tam) {
        personas[can++] = &per;
        return true;
    }

    return false;
}

string ColeccionPersonas::listarMascotas(string nombreDueno) {
    stringstream s;
    for (int i = 0; i < can; i++) {
        if (personas[i] != nullptr && personas[i]->getNombre() == nombreDueno && personas[i]->getmascotas() != nullptr) {
            s << personas[i]->listarMascotas();  
        }
    }
    return s.str();
}

Persona* ColeccionPersonas::buscarPersonaNombre(string nom) {
    for (int i = 0; i < can; i++) {
        if (personas[i] != nullptr && personas[i]->getNombre() == nom) {
            return personas[i];
        }
    }
    return nullptr;
}

Persona* ColeccionPersonas::buscarPersonaCedula(string ced) {
    for (int i = 0; i < can; i++) {
        if (personas[i] != nullptr && personas[i]->getCedula() == ced) {
            return personas[i];
        }
    }
    return nullptr;
}

string ColeccionPersonas::mostrarDuenos() {
    stringstream s;
    for (int i = 0; i < can; i++) {
        if (personas[i] != nullptr && personas[i]->getmascotas() != nullptr) {
            s << personas[i]->toStringDueno() << endl;
        }
    }
    return s.str();
}

string ColeccionPersonas::mostrarDoctores() {
    stringstream s;
    for (int i = 0; i < can; i++) {
        if (personas[i] != nullptr && personas[i]->getmascotas() == nullptr) {
            s << personas[i]->toString() << endl;
        }
    }
    return s.str();
}
