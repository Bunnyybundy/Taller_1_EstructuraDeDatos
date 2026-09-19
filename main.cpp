

#include "main.h"

#include <iostream>

#include "ColaPacientes.h"
#include "Hospital.h"
using namespace std;

int main()
{
    Hospital h;
    ColaPacientes cola;
    PilaPacientes historial;

    cargarPacientes("pacientes.txt",cola);

    int opcion;
    do
    {
        std::cout << "=== HOSPITAL MARMAJA ===\n";
        std::cout << "1. Atender pacientes\n ";
        std::cout << "2. Ver departamento\n";
        std::cout << "3. Revisar historial\n";
        std::cout << "4. Salir\n";
        std::cin >> opcion;

        switch (opcion)
        {
            case 1: atenderPacientes(cola, h, historial);
                 break;
            case 2: h.mostrarServicios();
                 break;
            case 3: historial.mostrar();
                break;
            case 4: cout <<"Saliendo..."<<endl;
            break;
            default: cout <<"Opcion no valida"<<endl;
            break;
        }
    }while(opcion != 4);
    return 0;
}
