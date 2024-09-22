#include "coleccionEspecialidad.h"

ColeccionEspecialidad::ColeccionEspecialidad(int t){
    tam = t;
    can = 0;
    especialidades = new Especialidad * [tam];
        for (int i = 0; i < tam; i++) {
	    especialidades[i] = nullptr;
        }

}

ColeccionEspecialidad::~ColeccionEspecialidad() {
	delete[]especialidades;
}

bool ColeccionEspecialidad::agregarEspecialidad(Especialidad & e){
    for (int i = 0; i < can; i++) {
	    if (especialidades[i] != nullptr && especialidades[i]->getNombre() == e.getNombre()) {
		return false;
	    }
    }
if(can< tam){
    especialidades[can] = new Especialidad(e);
    can++;
    return true;
    }else{
        return false;
        }
}

string ColeccionEspecialidad::mostrarEspecialidades(){
    stringstream s;
    for (int i = 0; i < can; i++) {
	    if (especialidades[i] != nullptr) {
		    s << "#" << i+1 <<" "<<especialidades[i]->toString() << endl;
            return s.str();
        }
    }
}

string ColeccionEspecialidad::DoctorporEspecialidades(string e){
    stringstream s;

    for (int i = 0; i < can; i++) {
        if (especialidades[i] != nullptr && e == especialidades[i]->getNombre()) {
            //s << especialidades[i]->mostrarDoctoresPorEspecialidad();
        }

    }
    return s.str();
}
