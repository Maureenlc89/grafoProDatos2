/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaVertices.cpp
 * Author: suhu2
 * 
 * Created on August 5, 2016, 6:43 PM
 */

#include "ListaVertices.h"

ListaVertices::ListaVertices() {
    setCabeza(NULL);
}

ListaVertices::ListaVertices(const ListaVertices& orig) {
}

ListaVertices::~ListaVertices() {
}
Vertice* ListaVertices::getCabeza(){
    return cabeza;
}
void ListaVertices::setCabeza(Vertice* pcabeza){
    cabeza=pcabeza;
}
void ListaVertices::insertar(Vertice* paux ){
    if(this->esVacia()){
        cabeza=paux;   
    }else{
        paux->setSiguiente(cabeza);
        cabeza=paux;
    }
}
bool ListaVertices::esVacia(){
    
    if(cabeza == NULL){
        return true;
    }else{
        return false;
    }
}