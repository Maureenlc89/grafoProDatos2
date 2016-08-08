/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arco.h
 * Author: suhu2
 *
 * Created on August 5, 2016, 6:00 PM
 */

#ifndef ARCO_H
#define ARCO_H
#include "Vertice.h" 
#include <iostream>

using namespace std;

class Arco {
public:
    Arco();
    Arco(Vertice*,Vertice*,double);
    Arco(const Arco& orig);
    virtual ~Arco();
    
    Vertice* getOrigen();
    Vertice* getDestino();
    double getDistancia();
    Arco* getSiguiente();
    
    void setSiguiente(Arco*);
    void setOrigen(Vertice*);
    void setDestino(Vertice*);
    void setDistancia(double);
private:
    Vertice* origen;
    Vertice* destino;
    double distancia;
    Arco* siguiente; 
};

#endif /* ARCO_H */

