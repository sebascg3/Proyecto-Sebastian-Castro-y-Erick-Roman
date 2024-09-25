#include "InterfazDeUsuario.h"

void InterfazDeUsuario::mostrarMenuPrincipal(AdmHospital& ah) {
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
            mostrarSubmenuAdministracion(ah);
            
            break;
        case 2:
            mostrarSubmenuControlCitas(ah);
            break;
        case 3:
            mostrarSubmenuBusquedasYListados(ah);
            break;
        default:
            cout << "Opcion no valida, intente nuevamente." << endl;
            break;
        }
    } while (opcion != 0);
}

void InterfazDeUsuario::mostrarSubmenuAdministracion(AdmHospital& ah) {
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
        
            ingresarEspecialidad(ah);
            break;
        case 2:
            ingresarDoctor(ah);
            break;
        case 3:
            ingresarDueno(ah);
            break;
        case 4:
            ingresarMascota(ah);
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

void InterfazDeUsuario::mostrarSubmenuControlCitas(AdmHospital& ah) {
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
            sacarCita(ah);
            break;
        case 2:
            cancelarCita(ah);
            break;
        case 3:
            mostrarCalendarioCitasPorDoctor(ah);
            break;
        case 4:
            mostrarCitasPorDueno(ah);
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

void InterfazDeUsuario::mostrarSubmenuBusquedasYListados(AdmHospital& ah) {
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
            mostrarListadoEspecialidades(ah);
            break;
        case 2:
            mostrarDoctoresPorEspecialidad(ah);
            break;
        case 3:
            mostrarDuenosConMascotas(ah);
            break;
        case 4:
            mostrarPacientesPorDoctor(ah);
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

void InterfazDeUsuario::ingresarEspecialidad(AdmHospital& ah) {
	system("cls");
    string esp;
    cout << "Funcion para ingresar una especialidad." << endl;
    cout << "Ingrese especialidad: ";
    cin >> esp;
    Especialidad* nuevaEspecialidad = new Especialidad(esp);

    if (ah.ingresarEspecialidad(*nuevaEspecialidad)) {
        cout << "Especialidad '" << esp << "' añadida correctamente." << endl;
    }
    else {
        cout << "Error: La especialidad '" << esp << "' ya existe." << endl;
        delete nuevaEspecialidad;
    }
}


void InterfazDeUsuario::ingresarDoctor(AdmHospital& ah) {
	system("cls");
    string cedula, nombre, especialidad;
    cout << "Funcion para ingresar un doctor por especialidad." << endl;
    cout << "Ingrese el nombre: ";
    cin >> nombre;
    cout << "Ingrese su numero de cedula: ";
    cin >> cedula;
    cout << "Ingrese su Especialidad: ";
    cin >> especialidad;
    Persona* nuevoDoctor = new Doctor(cedula, nombre);
    Especialidad* esp1 = ah.buscarEspecialidad(especialidad);
    if (esp1 == nullptr) {
        cout << "No se ha registrado la Especialidad. Intente de nuevo." << endl;
        delete nuevoDoctor;
    }
    else if (esp1->insertarDoc(*nuevoDoctor) && ah.agregarDoctor(*nuevoDoctor)) {
        cout << "Fue exitoso el ingreso del doctor." << endl;
    }
    else {
        cout << "Hubo un error al ingresar al Doctor." << endl;
    }
}

void InterfazDeUsuario::ingresarDueno(AdmHospital& ah) {
	system("cls");
    string nombre, cedula;
    cout << "Funcion para ingresar un dueno." << endl;
    cout << "Ingrese el nombre: ";
    cin >> nombre;
    cout << "Ingrese su numero de cedula: ";
    cin >> cedula;
    Persona* nuevoDueno = new Dueno(cedula, nombre);
    if (ah.ingresarDueno(*nuevoDueno)) {
        cout << "Dueno '" << nombre << "' agregado correctamente." << endl;
    }
    else {
        cout << "Error: El dueno ya existe." << endl;
        delete nuevoDueno;
    }
}

void InterfazDeUsuario::ingresarMascota(AdmHospital& ah) {
    system("cls");
    string cedulaDueno, nombreMascota, tipoMascota;
    int edadMascota;
    cout << "Funcion para ingresar una mascota por duenio." << endl;
    cout << "Ingrese la cedula del dueno: ";
    cin >> cedulaDueno;

    Persona* dueno = ah.buscarPersonaCedula(cedulaDueno);
    if (dueno == nullptr) {
        cout << "Dueno no encontrado." << endl;
        return;
    }

    cout << "Ingrese el nombre de la mascota: ";
    cin >> nombreMascota;
    cout << "Tipo de Mascota: " << endl;
    cin >> tipoMascota;
    cout << "Ingrese la edad de la mascota: ";
    cin >> edadMascota;

    Mascota* nuevaMascota = new Mascota(nombreMascota, tipoMascota, edadMascota);
    if (dueno->agregarpaciente(*nuevaMascota)) {
        cout << "Mascota agregada correctamente." << endl;
    }
    else {
        cout << "Error al agregar la mascota." << endl;
        delete nuevaMascota;
    }
}

void InterfazDeUsuario::sacarCita(AdmHospital& ah) {
    system("cls");
    cout << "Funcion para sacar una cita." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::cancelarCita(AdmHospital& ah) {
	system("cls");
    cout << "Funcion para cancelar una cita." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::mostrarCalendarioCitasPorDoctor(AdmHospital& ah) {
	system("cls");
    cout << "Funcion para mostrar calendario de citas por doctor." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::mostrarCitasPorDueno(AdmHospital& ah) {
	system("cls");
    cout << "Funcion para mostrar citas por duenio." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::mostrarListadoEspecialidades(AdmHospital& ah) {
	system("cls");
    cout << "Funcion para mostrar el listado de especialidades." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::mostrarDoctoresPorEspecialidad(AdmHospital& ah) {
	system("cls");
    cout << "Funcion para mostrar los doctores por especialidad." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::mostrarDuenosConMascotas(AdmHospital& ah) {
	system("cls");
    cout << "Funcion para mostrar los due�os con sus mascotas." << endl;
    // Implementar l�gica
}

void InterfazDeUsuario::mostrarPacientesPorDoctor(AdmHospital& ah) {
	system("cls");
    cout << "Funcion para mostrar pacientes por doctor." << endl;
    // Implementar l�gica
}