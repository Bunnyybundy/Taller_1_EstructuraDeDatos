

#include "Persona.h"
#include <iostream>
using namespace std;

void Persona::mostrarInfo() const
{
    cout<<"ID: " << id << " | Nombre: " << nombre << " | Edad " <<edad << endl;
}
