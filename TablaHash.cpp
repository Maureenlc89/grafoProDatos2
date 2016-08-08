/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   TablaHash.cpp
 * Author: suhu2
 * prueba
 * Created on August 5, 2016, 6:31 PM
 */

#include "TablaHash.h"

TablaHash::TablaHash() {
    for(int i=0;i<tamanioArreglo;i++){
        ubicaciones[i]=NULL;
    } 
}

TablaHash::TablaHash(const TablaHash& orig) {
}

TablaHash::~TablaHash() {
}

void TablaHash::insertarUbicacion(Vertice* pubicacion){
    int posArreglo=funcionHash(pubicacion->getNombre());
    if(ubicaciones[posArreglo]==NULL){
        ListaVertices* nuevo= new ListaVertices();
        ubicaciones[posArreglo]==nuevo;
        nuevo->insertar(pubicacion); 
    }else{
        ListaVertices* nuevo= ubicaciones[posArreglo];
         nuevo->insertar(pubicacion);
    }
    
}
int TablaHash::funcionHash(string pnombre){
    int valor = 0;
    for (int i = 0; i < pnombre.length(); i++) {
        valor += (int) pnombre[i];
    }
    return (valor % tamanioArreglo);
}