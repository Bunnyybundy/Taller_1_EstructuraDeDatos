#include "ColaPacientes.h"
#include "Hospital.h"
#include "PilaHistorial.h"
#include "main.h"
#include <iostream>

using namespace std;

void atenderPacientes(ColaPacientes& cola, Hospital& hospital, PilaPacientes& historial) {
    if (cola.estaVacia()) {
        cout << "No hay pacientes en espera." << endl;
        return;
    }

    cout << "=== PACIENTES EN ESPERA ===" << endl;
    cola.mostrar();

    cout << "Indique la cantidad de pacientes a atender: ";
    int cantidad;
    cin >> cantidad;

    if (cantidad <= 0) {
        std::cout << "Cantidad invalida." << std::endl;
        return;
    }

    cout << "=== ATENDIENDO PACIENTES ===" << endl;
    int atendidos = 0;
    while (atendidos < cantidad && !cola.estaVacia()) {
        Paciente* p = cola.desencolar();
        p->mostrarInfo();

        if (hospital.derivarPaciente(p)) {
            cout << "Paciente enviado a " << p->getServicio() << "." << endl;
            historial.apilar(Atencion(p->getNombre(), p->getEdad(), p->getServicio()));
        } else {
            cout << "Servicio invalido para el paciente " << p->getId() << ", se descarta." << endl;
            delete p; //no fue absorvido por ningun servicio
        }
        cout << endl;
        atendidos++;
    }

    if (atendidos < cantidad) {
        cout << "Se atendieron " << atendidos << " pacientes (no habia mas en espera)." << endl;
    }
}

int main()
{
    Hospital h;
    ColaPacientes cola;
    PilaPacientes historial;

    cargarPacientes("pacientes.txt",cola);

    int opcion;
    do
    {
        cout << "=== HOSPITAL MARMAJA ===\n";
        cout << "1. Atender pacientes\n ";
        cout << "2. Ver departamento\n";
        cout << "3. Revisar historial\n";
        cout << "4. Salir\n";
        cout << "Seleccionar opcion: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1: atenderPacientes(cola, h, historial);
                 break;
            case 2: h.mostrarServicios();
                 break;
            case 3: historial.mostrar();
                break;
            case 4: cout <<"Saliendo..."<< endl;
            break;
            default: cout <<"Opcion no valida"<<endl;
            break;
        }
    }while(opcion != 4);
    return 0;
}
