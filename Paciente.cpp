

#include "Paciente.h"
#include <iostream>
using namespace std;

void Paciente::mostrarInfo() const
{
    cout<<"ID: " << id << "| nombre:  " << nombre << " | Edad: " << edad << " | Servicio: " << servicio << endl ;
}