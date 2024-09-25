#pragma once
#include <iostream>
#include <sstream>
using namespace std;
class horario {
private:
    string Dia[6];            
    string Hora[6][12];
public:
    horario();
    ~horario();
    string toStringHorario();
};
