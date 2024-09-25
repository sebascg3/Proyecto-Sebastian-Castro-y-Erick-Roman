#include "coleccionMascotas.h"
#define cm 50
coleccionMascotas::coleccionMascotas():can(0), tam(cm) {
    mascotas = new Mascota * [tam];
    for (int i = 0; i < tam; i++) {
	mascotas[i] = nullptr;
    }
}
coleccionMascotas::~coleccionMascotas(){
    delete [] mascotas;
}

bool coleccionMascotas::ingresarMascota(Mascota & m){
    if (can < tam) {
        mascotas[can] = (Mascota*)& m;
        can++;
        return true;
        }
    else{
        return false;
    }
}
string coleccionMascotas::tostring(){
    	stringstream s;
	
	for (int i = 0; i < can; i++) 
	s <<"\n#"<<i+1<<" "<<mascotas[i]->toString();
	return s.str();

}

Mascota *coleccionMascotas::buscarMascota(string n){
	if (can == 0) {
		return nullptr;
	}
	for (int i = 0; i < can; i++) {
		if (mascotas[i] != nullptr && mascotas[i]->getNombre() == n) {
			return mascotas[i];
		}
	}
	return nullptr;
}