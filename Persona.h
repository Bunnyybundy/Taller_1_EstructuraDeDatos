

#ifndef TALLER_1_ESTRUCTURADEDATOS_PERSONA_H
#define TALLER_1_ESTRUCTURADEDATOS_PERSONA_H
using namespace std;
#include <string>

class Persona
{
    protected:
    string id;
    string nombre;
    int edad;

    public:
    Persona(string _id, string _nombre, int _edad) : id(_id), nombre(_nombre), edad(_edad) {}

    virtual ~Persona() {}

    string getId() { return id; }
    string getNombre() { return nombre; }
    int getEdad() { return edad; }

    virtual void mostrarInfo() const;
};


#endif //TALLER_1_ESTRUCTURADEDATOS_PERSONA_H
