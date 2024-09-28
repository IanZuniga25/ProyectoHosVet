#include <iostream>
#include <sstream>
#include <vector>
#include "Doctor.h"
#include "Cita.h"
#include "Dueño.h"
#include "Mascota.h"
#include "Metodos.h"

using namespace std;

int main() {
    Doctor doctor("Dr. Juan Pérez", "Veterinario");

    string especie = "Perro";
    string petName = "Fido";
    int age = 3;
    Mascota mascota(&especie, &petName, &age);

    string ownerName = "Carlos López";
    int ownerID = 12345;
    Dueño dueño(&ownerName, &ownerID, &mascota);

    Cita** agenda = new Cita * [NUM_DIAS];
    for (int i = 0; i < NUM_DIAS; i++) {
        agenda[i] = new Cita[NUM_HORAS];
    }
    inicializarAgenda(agenda);

    int diaCita = 3; 
    int horaCita = 10;
    string resultado = asignarCita(&doctor, agenda, diaCita, horaCita, &dueño, &mascota);
    cout << resultado;

    cout << mostrarAgendaDoctor(agenda);

    for (int i = 0; i < NUM_DIAS; i++) {
        delete[] agenda[i];
    }
    delete[] agenda;

    return 0;
}