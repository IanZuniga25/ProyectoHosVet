#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Cita {
private:
    int Hora;
    int Dia;
    Doctor* Doctores;
public:
    Cita(int Hora, int Dia);   

    string mostrarCita() {
        stringstream s;
        s << "Hora de la cita: " << Hora << ", Dia de la cita: " << Dia << endl;
    }
    ~Cita() {}


};