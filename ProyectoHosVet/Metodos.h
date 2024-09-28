#include <iostream>
#include <vector>
#include <string>
#include "Doctor.h"
#include "Cita.h"
#include "Dueño.h"
#include "Mascota.h"

using namespace std;

// Tamaño de la agenda del doctor (lunes a sábado, 8:00 a 19:00 = 12 horas por 6 días)
const int NUM_DIAS = 6;
const int NUM_HORAS = 12; // De 8:00 a 19:00 son 12 horas de trabajo

// Función que verifica la disponibilidad del doctor
bool verificarDisponibilidad(Cita** agenda, int dia, int hora) {
    if (agenda[dia][hora].Hora == -1) {
        // Si la hora es -1 significa que está disponible
        return true;
    }
    return false;
}

// Función para asignar una cita
string asignarCita(Doctor* doctores, int numDoctores, Cita** agenda, int dia, int hora, Doctor* doctor, Dueño* dueño, Mascota* mascota) {
    stringstream s;

    // Ajustamos día para que el input del usuario sea de 1 a 6, y lo adaptamos al rango de 0 a 5.
    dia = dia - 1;

    if (dia < 0 || dia >= NUM_DIAS || hora < 8 || hora > 19) {
        s << "Error: Hora o día fuera del rango permitido.\n";
        return s.str();
    }

    // Ajustamos la hora al índice del arreglo (8:00 -> índice 0, 9:00 -> índice 1, etc.)
    int horaIndex = hora - 8;

    // Verificamos la disponibilidad del doctor en el día y hora específicos
    if (verificarDisponibilidad(agenda, dia, horaIndex)) {
        // Asignamos la cita
        agenda[dia][horaIndex] = Cita(hora, dia); // Se crea la cita con la hora y el día
        agenda[dia][horaIndex].Doctores = doctor; // Asignamos el doctor

        s << "Cita asignada exitosamente.\n";
        s << "Doctor: " << doctor->getName() << " - Especialidad: " << doctor->getEspecialidad() << "\n";
        s << "Dueño: " << dueño->getName() << " - ID: " << dueño->getID() << "\n";
        s << "Mascota: " << mascota->getPetName() << "\n";
        s << "Hora: " << hora << ":00 - Día: " << dia + 1 << "\n"; // Imprime el día ajustado
    }
    else {
        s << "Error: El doctor ya tiene una cita asignada en este horario.\n";
    }
    return s.str();
}


// Función para visualizar la agenda del doctor
string mostrarAgendaDoctor(Cita** agenda) {
    stringstream s;
    s << "Agenda del doctor:\n";
    for (int dia = 0; dia < NUM_DIAS; dia++) {
        s << "Día " << dia + 1 << ":\n";
        for (int hora = 0; hora < NUM_HORAS; hora++) {
            if (agenda[dia][hora].Hora == -1) {
                s << "Hora " << hora + 8 << ":00 - Disponible\n"; // Hora ajustada para mostrar la hora real
            }
            else {
                s << "Hora " << hora + 8 << ":00 - Ocupado\n";
            }
        }
    }
    return s.str();
}


// Función para inicializar la agenda con horarios disponibles
void inicializarAgenda(Cita** agenda) {
    for (int dia = 0; dia < NUM_DIAS; dia++) {
        for (int hora = 0; hora < NUM_HORAS; hora++) {
            agenda[dia][hora] = Cita(-1, -1); // Inicializa las citas con -1, indicando que están libres
        }
    }
}