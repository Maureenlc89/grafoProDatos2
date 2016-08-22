/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TablaHash.h
 * Author: suhu2
 *
 * Created on August 5, 2016, 6:31 PM
 */

#ifndef TABLAHASH_H
#define TABLAHASH_H
#include "ListaVertices.h"
#include "Vertice.h"
 int const tamanioArreglo=13; /// flta sets y gets
class TablaHash {
public:
    TablaHash();
    TablaHash(const TablaHash& orig);
    virtual ~TablaHash();
    
    ListaVertices*  getUbicaciones();
    void setUbicaciones(ListaVertices* []);
    void insertarUbicacion(Vertice*);
    int funcionHash(string);
    int funcionHash(int);
    int buscarAdyacencias(int);
    Vertice* recorrerListaVertices(Vertice*,int);
    void insertarUbicacionRecursivo();
    Vertice* getCabezaLista(int);
private:
    ListaVertices* ubicaciones[tamanioArreglo];//la mitad el numero primo anterior 
};

#endif /* TABLAHASH_H */

