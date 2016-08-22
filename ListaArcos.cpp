/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaArcos.cpp
 * Author: suhu2
 * 
 * Created on August 5, 2016, 6:14 PM
 */

#include "ListaArcos.h"

ListaArcos::ListaArcos() {
    setCabeza(NULL);
}

ListaArcos::ListaArcos(const ListaArcos& orig) {
}

ListaArcos::~ListaArcos() {
}
Arco* ListaArcos::getCabeza(){
    return cabeza;
}
void ListaArcos::setCabeza(Arco* pcabeza){
    cabeza =  pcabeza;
}
void ListaArcos::insertar(Arco* paux ){
    if(this->esVacia()){
        cabeza=paux;   
    }else{
        paux->setSiguiente(cabeza);
        cabeza=paux;
    }
}
bool ListaArcos::esVacia(){
    
    if(cabeza == NULL){
        return true;
    }else{
        return false;
    }
}
