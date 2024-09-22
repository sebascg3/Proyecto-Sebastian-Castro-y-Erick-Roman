#include "InterfazDeUsuario.h"

void InterfazDeUsuario::mostrarMenuPrincipal() {
    int opcion;
    do {
        system("cls");
        cout << "\tHospital Veterinario" << endl;
        cout << "Menu Principal" << endl;
        cout << "1- Submenu Administracion" << endl;
        cout << "2- Submenu Control de Citas" << endl;
        cout << "3- Submenu Busquedas y Listados" << endl;
        cout << "Ingrese la opcion: ", cin >> opcion;

        switch (opcion) {
        case 1:
            mostrarSubmenuAdministracion();
            
            break;
        case 2:
            mostrarSubmenuControlCitas();
            break;
        case 3:
            mostrarSubmenuBusquedasYListados();
            break;
        default:
            cout << "Opcion no valida, intente nuevamente." << endl;
            break;
        }
    } while (opcion != 0);
}

void InterfazDeUsuario::mostrarSubmenuAdministracion() {
    int opcion;
    do {
        system("cls");
        cout << "Submenu Administracion" << endl;
        cout << "(1) Ingresar Especialidades" << endl;
        cout << "(2) Ingresar Doctor (por especialidad)" << endl;
        cout << "(3) Ingresar Duenio" << endl;
        cout << "(4) Ingresar Mascota (por duenio)" << endl;
        cout << "(0) Regresar al Menu Principal" << endl;
        cout << "Ingrese la opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
        
            ingresarEspecialidad();
            break;
        case 2:
            ingresarDoctor();
            break;
        case 3:
            ingresarDueno();
            break;
        case 4:
            ingresarMascota();
            break;
        case 0:
            cout << "Regresando al Menu Principal..." << endl;
            break;
        default:
            cout << "Opcion no valida, intente nuevamente." << endl;
            break;
        }
    } while (opcion != 0);
}

void InterfazDeUsuario::mostrarSubmenuControlCitas() {
    int opcion;
    do {
        system("cls");
        cout << "Submenu Control de Citas" << endl;
        cout << "(1) Sacar Cita" << endl;
        cout << "(2) Cancelar Cita" << endl;
        cout << "(3) Mostrar Calendario de Citas por Doctor" << endl;
        cout << "(4) Mostrar Citas por Duenio" << endl;
        cout << "(0) Regresar al Menu Principal" << endl;
        cout << "Ingrese la opcion: ", cin >> opcion;


        switch (opcion) {
        case 1:
            sacarCita();
            break;
        case 2:
            cancelarCita();
            break;
        case 3:
            mostrarCalendarioCitasPorDoctor();
            break;
        case 4:
            mostrarCitasPorDueno();
            break;
        case 0:
            cout << "Regresando al Menu Principal..." << endl;
            break;
        default:
            cout << "Opcion no valida, intente nuevamente." << endl;
            break;
        }
    } while (opcion != 0);
}

void InterfazDeUsuario::mostrarSubmenuBusquedasYListados() {
    int opcion;
    do {
        system("cls");
        cout << "Submenu Busquedas y Listados" << endl;
        cout << "(1) Mostrar Listado de Especialidades" << endl;
        cout << "(2) Mostrar Listado de Doctores por Especialidad" << endl;
        cout << "(3) Mostrar Duenios con sus Mascotas" << endl;
        cout << "(4) Mostrar Pacientes por Doctor" << endl;
        cout << "(0) Regresar al Menu Principal" << endl;
        cout << "Ingrese la opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            mostrarListadoEspecialidades();
            break;
        case 2:
            mostrarDoctoresPorEspecialidad();
            break;
        case 3:
            mostrarDuenosConMascotas();
            break;
        case 4:
            mostrarPacientesPorDoctor();
            break;
        case 0:
            cout << "Regresando al Menu Principal..." << endl;
            break;
        default:
            cout << "Opcion no valida, intente nuevamente." << endl;
            break;
        }
    } while (opcion != 0);
}

void InterfazDeUsuario::ingresarEspecialidad() {
	system("cls");
    cout << "Funcion para ingresar una especialidad." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::ingresarDoctor() {
	system("cls");
    cout << "Funcion para ingresar un doctor por especialidad." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::ingresarDueno() {
	system("cls");
    cout << "Funcion para ingresar un duenio." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::ingresarMascota() {
	system("cls");
    cout << "Funcion para ingresar una mascota por duenio." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::sacarCita() {
    system("cls");
    cout << "Funcion para sacar una cita." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::cancelarCita() {
	system("cls");
    cout << "Funcion para cancelar una cita." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::mostrarCalendarioCitasPorDoctor() {
	system("cls");
    cout << "Funcion para mostrar calendario de citas por doctor." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::mostrarCitasPorDueno() {
	system("cls");
    cout << "Funcion para mostrar citas por duenio." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::mostrarListadoEspecialidades() {
	system("cls");
    cout << "Funcion para mostrar el listado de especialidades." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::mostrarDoctoresPorEspecialidad() {
	system("cls");
    cout << "Funcion para mostrar los doctores por especialidad." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::mostrarDuenosConMascotas() {
	system("cls");
    cout << "Funcion para mostrar los due�os con sus mascotas." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::mostrarPacientesPorDoctor() {
	system("cls");
    cout << "Funcion para mostrar pacientes por doctor." << endl;
    // Implementar l�gica
}