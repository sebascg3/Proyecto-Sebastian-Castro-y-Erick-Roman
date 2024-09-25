#pragma once
#include <iostream>
#include <string>
#include "ColeccionCitas.h"
#include "Doctor.h"
#include "Dueno.h"
#include "coleccionEspecialidad.h"
#include "coleccionMascotas.h"
#include "ColeccionPersonas.h"
#include "AdmHospital.h"
using namespace std;

class InterfazDeUsuario{
public:
    void mostrarMenuPrincipal(AdmHospital& ah);
    void mostrarSubmenuAdministracion(AdmHospital&);
    void mostrarSubmenuControlCitas(AdmHospital&);
    void mostrarSubmenuBusquedasYListados(AdmHospital&);

    void ingresarEspecialidad(AdmHospital&);
    void ingresarDoctor(AdmHospital&);
    void ingresarDueno(AdmHospital&);
    void ingresarMascota(AdmHospital&);

    void sacarCita(AdmHospital&);
    void cancelarCita(AdmHospital&);
    void mostrarCalendarioCitasPorDoctor(AdmHospital&);
    void mostrarCitasPorDueno(AdmHospital&);

    void mostrarListadoEspecialidades(AdmHospital&);
    void mostrarDoctoresPorEspecialidad(AdmHospital&);
    void mostrarDuenosConMascotas(AdmHospital&);
    void mostrarPacientesPorDoctor(AdmHospital&);
};
