

#include "Paciente.h"
#include <iostream>

#include "ColaPacientes.h"
#include "Hospital.h"
#include "PilaHistorial.h"
using namespace std;

void Paciente::mostrarInfo() const
{
    cout<<"ID: " << id << "| nombre:  " << nombre << " | Edad: " << edad << " | Servicio: " << servicio << endl ;
}
