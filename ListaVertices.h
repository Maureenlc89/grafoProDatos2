/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaVertices.h
 * Author: suhu2
 *
 * Created on August 5, 2016, 6:43 PM
 */

#ifndef LISTAVERTICES_H
#define LISTAVERTICES_H
#include "Vertice.h"

class ListaVertices {
public:
    ListaVertices();
    ListaVertices(const ListaVertices& orig);
    virtual ~ListaVertices();
    Vertice* getCabeza();
    void setCabeza(Vertice*);
    void insertar(Vertice*);
    bool esVacia();
private:
    Vertice* cabeza;
};

#endif /* LISTAVERTICES_H */

