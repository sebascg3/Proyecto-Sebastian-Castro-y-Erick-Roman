#pragma once
#include <iostream>
#include <sstream>
#include "coleccionMascotas.h"
#include "Persona.h"

class Dueno : public Persona {
private:
    coleccionMascotas* MascotaDueno;
public:
    Dueno(string ced, string nom);
   ~Dueno();
    coleccionMascotas* getmascotas();
    void setmascotas(coleccionMascotas*);
   bool ingresaMascota(Mascota& nuevaMascota);
   string listarMascotas();
  
    Mascota* buscarMascotaNombre(string nombredemascota);
    string toString();

    string toStringDueno();

   coleccionMascotas* getpacientes();
   void agregarpaciente(Mascota& m);
   string mostrarPacientes();
   void eliminarhoracita(string, string);
   string mostraragenda();
   void liberarhoracita(string d, string);
   horario* getagenda();
  
};
