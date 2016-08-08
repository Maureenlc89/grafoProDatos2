/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vertice.h
 * Author: suhu2
 *
 * Created on August 1, 2016, 4:46 PM
 */

#ifndef VERTICE_H
#define	VERTICE_H
#include <iostream>

using namespace std;

class Vertice {
public:
    Vertice(string,int);
    Vertice(const Vertice& orig);
    virtual ~Vertice();
    
    string getNombre();
    
    int getPosMatriz();
    Vertice* getSiguiente();
    
    void setSiguiente(Vertice*);
    void setNombre(string);
    void setPosMatriz(int);
    
private:
    string nombre;
    int posMatriz;
    Vertice* siguiente;
    // lista simple de arcos
};

#endif	/* VERTICE_H */

