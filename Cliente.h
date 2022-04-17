#pragma once
#include <iostream>
#include "ListaDoblementeEnlazada.h"
#include <string>
#include "Persona.h"
#include "Plato.h"
using namespace std;
class Cliente : public Persona {
public:
    DoubleLinkedList<Plato> pedidos;

    Cliente() : Persona() {}
    void imprimir()
    {
        cout << "Nombre: " << nombre << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "DNI: " << dni << endl;
        cout << "Edad: " << edad << endl;
        cout << "Nacimiento: " << nacimiento.dia << "/" << nacimiento.mes << "/" << nacimiento.anio << endl;
        cout << "Direccion : " << direccionCompleta;

        if (pedidos.Length() == 0)
            return;
        cout << "\n[PEDIDOS DE ESTE CLIENTE]\n";
        for (int i = 0; i < pedidos.Length(); i++)
            pedidos.at(i).imprimirPlato();
    }
    friend void cargarPersona(DoubleLinkedList<Cliente>&);
    friend Cliente crearCliente();
    friend void modificacionCliente(DoubleLinkedList<Cliente>&);
};

