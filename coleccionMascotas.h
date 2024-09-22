#pragma once
#include "Mascota.h"
class coleccionMascotas{
private:
	Mascota** mascotas;
	int can;
	int tam;
public:
coleccionMascotas(int);
~coleccionMascotas();
bool ingresarMascota(Mascota&);
string tostring();
Mascota* buscarMascota(string);
};