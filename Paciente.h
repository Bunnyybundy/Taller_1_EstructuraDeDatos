

#ifndef TALLER_1_ESTRUCTURADEDATOS_PACIENTE_H
#define TALLER_1_ESTRUCTURADEDATOS_PACIENTE_H

#include "Persona.h"
using namespace std;

class Paciente : public Persona
{
    private:
     string servicio;

    public:
    Paciente(string _id, string _nombre, int _edad, string _servicio):Persona(_id, _nombre, _edad),servicio(_servicio) {}

    string getServicio() const { return servicio; }

    void mostrarInfo() const override;
};


#endif //TALLER_1_ESTRUCTURADEDATOS_PACIENTE_H
