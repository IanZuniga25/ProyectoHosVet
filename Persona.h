#pragma once
#include <sstream>
using namespace std;

class Persona {//Para dueño y doctor
private:
    string name;
    double ID;
    int Age;
public:
    Persona();
    Persona(string, double) {
        this->name = name;
        this->ID = ID;
        this->Age = Age;
    }
    string getname(string name) {
        return name;
    }
    double getID(int ID) {
        return ID;
    }
    int getAge(int Age) {
        return Age;
    }
    void setname() {
        name = name;
    }
    void setID() {
        ID = ID;
    }
    void setAge() {
        Age = Age;
    }
    ~Persona() {}
};