/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vertice.cpp
 * Author: suhu2
 * 
 * Created on August 1, 2016, 4:46 PM
 */

#include "Vertice.h"


Vertice::Vertice(string pnombre,int pllave) {
    setNombre(pnombre);
    setPosMatriz(pllave);
}

Vertice::Vertice(const Vertice& orig) {
}

Vertice::~Vertice() {
}
string Vertice:: getNombre(){
    return nombre;
}
int Vertice::getPosMatriz(){
    return posMatriz;
}
void Vertice::setNombre(string pnom){
    nombre=pnom;
}
void Vertice::setPosMatriz(int ppos){
    posMatriz=ppos;
}
void Vertice::setSiguiente(Vertice* paux){
    siguiente=paux;
}
Vertice* Vertice::getSiguiente(){
    return siguiente;
}
bool Vertice::getVisitado(){
    return visitado;
}
void Vertice::setVisitado(bool pvisitado){
    visitado=pvisitado;
}
