
#include "Hospital.h"
#include <iostream>
using namespace std;

Hospital::Hospital() : servicios(nullptr)
{
    string nombres[] = {
        "Urgencias","Medicina General","Cardiologia",
        "Neurologia","Traumatologia","Cirugia",
        "Pediatria","Hospitalizacion"
    };

    NodoServicio* ultimo = nullptr;
    for (int i = 0; i < 8; i++) {
        NodoServicio* nuevo = new NodoServicio(nombres[i]);
        if (!servicios)
        {
            servicios = nuevo;
            ultimo = nuevo;
        }else{
            ultimo->siguiente = nuevo;
            ultimo = nuevo;
        }
    }
}

void Hospital::mostrarServicios()
{
    NodoServicio* actual = servicios;
    int i = 1;
    while (actual)
    {
        cout << i << "." << actual->nombre << endl;
        actual = actual->siguiente;
    }
}