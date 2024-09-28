#pragma once
#include <sstream>
using namespace std;
class Mascota {
private:
    string Especie, PetName;
    int Age;
public:
    Mascota();
    Mascota(string, string, int) {
        this->Especie = Especie;
        string PetName = PetName;
        this->Age = Age;
    }
    void getEspecie(string Especie) {
        Especie = Especie;
    }
    void getPetName(string PetName) {
        PetName = PetName;
    }
    void getAge(int Age) {
        Age = Age;
    }
    string setEspecie() {
        return Especie;
    }
    ~Mascota(){}
};



