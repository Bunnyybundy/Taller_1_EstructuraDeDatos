

#include "main.h"

#include <fstream>
#include <iostream>
#include <sstream>

#include "ColaPacientes.h"
#include "Hospital.h"
#include "PilaHistorial.h"
using namespace std;


void cargarPacientes(string nombreArchivo, ColaPacientes& cola)
{
   ifstream archivo(nombreArchivo);
    if (!archivo.is_open())
    {
        cout<<"Error al abrir el archivo"<<endl;
        return;
    }
    string linea;
    while (getline(archivo,linea))
    {
        stringstream ss(linea);
        string id, nombre, edadStr, servicio;
        getline(ss, id, ',');
        getline(ss, nombre, ',');
        getline(ss, edadStr, ',');
        getline(ss, servicio, ',');

        int edad = stoi(edadStr);
        Paciente* p = new Paciente(id, nombre, edad, servicio);
        cola.enqueue(p);
    }
    archivo.close();
}

void atenderPacientes(ColaPacientes& cola, Hospital& h, PilaHistorial& historial, int cantidad)
{
}

int main()
{
    Hospital h;
    ColaPacientes cola;
    PilaHistorial historial;

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
            case 1:
            int cant;
            cout << " Indique la cantidad de pacientes a atender: ";
            cin >> cant;
            atenderPacientes(cola, h, historial, cant);
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
