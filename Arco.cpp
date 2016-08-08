/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Arco.cpp
 * Author: suhu2
 * 
 * Created on August 5, 2016, 6:00 PM
 */

#include "Arco.h"

Arco::Arco() {
}

Arco::Arco(const Arco& orig) {
}

Arco::~Arco() {
}

Vertice* Arco::getOrigen(){
    return origen;
}
Vertice* Arco::getDestino(){
    return destino;
}
double Arco::getDistancia(){
    return distancia;
}
Arco* Arco::getSiguiente(){
    return siguiente;
}
void Arco::setDestino(Vertice* pdestino){
    destino=pdestino;
}
void Arco::setOrigen(Vertice* porigen){
    origen=porigen;
}
void Arco::setDistancia(double pdistancia){
    distancia=pdistancia;
}
void Arco::setSiguiente(Arco* psiguiente){
    siguiente= psiguiente;
}