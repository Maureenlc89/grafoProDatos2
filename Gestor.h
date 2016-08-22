/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Gestor.h
 * Author: suhu2
 *
 * Created on August 21, 2016, 11:42 PM
 */
#include "Grafo.h"
#include "TablaHash.h"
#include "Vertice.h"
#include "Arco.h"
#include "ListaArcos.h"
#ifndef GESTOR_H
#define GESTOR_H


class Gestor {
public:
    Gestor();
    Gestor(const Gestor& orig);
    virtual ~Gestor();
    void insertarInfo();
    void imprimirVertices();
    void buscarUbicacion(int);
    void buscarAdyacencias(int);

private:
    Grafo* grafo;
    TablaHash* tablaHash;
    
};

#endif /* GESTOR_H */

