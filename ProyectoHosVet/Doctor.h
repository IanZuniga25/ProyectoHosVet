#pragma once
#include <iostream>
#include <sstream>
using namespace std;

class Doctor {
private:
    string Name;
    string Especialidad;

public:
    Doctor() {}

    Doctor(string Name, string Especialidad) {
        this->Name = Name;
        this->Especialidad = Especialidad;
    }

    string getName() {
        return Name;
    }

    string getEspecialidad() {
        return Especialidad;
    }

    void setName(string Name) {
        this->Name = Name;
    }

    void setEspecialidad(string Especialidad) {
        this->Especialidad = Especialidad;
    }

    ~Doctor() {}

    string MostrarInfo() {
        stringstream s;
        s << "**********************************************************************\n";
        s << "  |  ||  |  ||  |  ||  |  ||  |  ||  |  ||  |  ||  |  ||  |  ||  |  ||  |  ||\n";
        s << "--v--vv--v--vv--v--vv--v--vv--v--vv--v--vv--v--vv--v--vv--v--vv--v--vv--v--vv\n";
        s << " Nombre: " << getName() << " -> Especialidad: " << getEspecialidad() << endl;
        return s.str();
    }
};
