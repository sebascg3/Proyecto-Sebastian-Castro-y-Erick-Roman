#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "ColeccionCitas.h"
#include "Doctor.h"
#include "Dueno.h"

using namespace std;

class InterfazDeUsuario{
public:
    void mostrarMenuPrincipal();
    void mostrarSubmenuAdministracion();
    void mostrarSubmenuControlCitas();
    void mostrarSubmenuBusquedasYListados();

    void ingresarEspecialidad();
    void ingresarDoctor();
    void ingresarDueno();
    void ingresarMascota();

    void sacarCita();
    void cancelarCita();
    void mostrarCalendarioCitasPorDoctor();
    void mostrarCitasPorDueno();

    void mostrarListadoEspecialidades();
    void mostrarDoctoresPorEspecialidad();
    void mostrarDuenosConMascotas();
    void mostrarPacientesPorDoctor();
};
