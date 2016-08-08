/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ListaArcos.h
 * Author: suhu2
 *
 * Created on August 5, 2016, 6:14 PM
 */

#ifndef LISTAARCOS_H
#define LISTAARCOS_H
#include "Arco.h"

class ListaArcos {
public:
    ListaArcos();
    ListaArcos(const ListaArcos& orig);
    virtual ~ListaArcos();
    Arco* getCabeza();
    void setCabeza(Arco*);
    void insertar(Arco*);
    bool esVacia();
private:
    Arco* cabeza;
};

#endif /* LISTAARCOS_H */

