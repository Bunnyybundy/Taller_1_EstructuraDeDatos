

#ifndef TALLER_1_ESTRUCTURADEDATOS_PACIENTE_H
#define TALLER_1_ESTRUCTURADEDATOS_PACIENTE_H

#include "Persona.h"
#include <string>
using namespace std;

class Paciente : public Persona
{
private:
    string servicio;
    bool atendido;

public:
    Paciente();
    Paciente(const string& id, const string& nombre, int edad, const string& servicio);
    ~Paciente();

    string getServicio() const;
    void setServicio(const string& servicio);

    bool getAtendido() const;
    void setAtendido(bool valor);

    void mostrarInfo() const override;
};


#endif //TALLER_1_ESTRUCTURADEDATOS_PACIENTE_H
