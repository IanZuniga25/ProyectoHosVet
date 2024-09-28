#pragma once
#include "Mascota.h"
#include <sstream>
#include <vector>
using namespace std;

class Dueño {
private:
    string* name;
    int* ID;
    Mascota* cantPets;
public:
    Dueño();
    Dueño(string* name, int* ID, Mascota* cantPets) {
        this->name = name;
        this->ID = ID;
        this->cantPets = cantPets;
    }
    string* getName() {
        return this->name;
    }
    int* getID() {
        return this->ID;
    }
    Mascota* getcantPets() {
        return this->cantPets;
    }
    void setName(string* name) {
        this->name = name;
    }
    void setID(int* ID) {
        this->ID = ID;
    }
    void setcantPets(Mascota* cantPets) {
        this->cantPets = cantPets;
    }
    void mascotas(){
        int* cant;
    cin >> *cant;
    Mascota* vector = new Mascota[*cant];
    for (int i = 0; i < *cant; i++) {
        vector[i] = *cantPets;
    }
}
    ~Dueño() {}
};