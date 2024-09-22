#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class horario {
private:
    string dias[6];            
    string horas[6][12];
public:
    horario();
    ~horario();
    string mostrarHorario();
};
