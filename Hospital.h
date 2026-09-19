
#ifndef TALLER_1_ESTRUCTURADEDATOS_HOSPITAL_H
#define TALLER_1_ESTRUCTURADEDATOS_HOSPITAL_H
#include <iostream>
#include "NodoPaciente.h"
using namespace std;

struct NodoServicio
{
    string nombre;
    NodoPaciente* paciente;
    NodoServicio* siguiente;

    NodoServicio(string n): nombre(n), paciente(nullptr), siguiente(nullptr) {}
};

class Hospital
{
private:
    NodoServicio* servicios;

public:
    Hospital();
    ~Hospital();
    void agregarPacienteAServicio(Paciente* p);
    void mostrarServicios();
    void mostrarPacientesPorServicio(string nombreServicio);
};



#endif //TALLER_1_ESTRUCTURADEDATOS_HOSPITAL_H
