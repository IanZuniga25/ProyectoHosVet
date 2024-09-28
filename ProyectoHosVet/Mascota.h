#pragma once
#include <sstream>
using namespace std;
class Mascota {
private:
    string* especie;
    string* petName;
    int* age;
public:
    Mascota();
    Mascota(string* es, string* pet, int* a) {
        this->especie = es;
        this->petName = petName;
        this->age = a;
    }
    void setEspecie(string* es) {
        this->especie = es;
    }
    void setPetName(string* pet) {
        this->petName = pet;
    }
    void setAge(int* a) {
        this->age = a;
    }
    string* getEspecie() {
        return this->especie;
    }
    string* getPetName() {
        return this->petName;
    }
    int* getAge() {
        return this->age;
    }
    ~Mascota() {}
};
