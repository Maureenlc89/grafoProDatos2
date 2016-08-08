/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   newmain.cpp
 * Author: suhu2
 *
 * Created on August 6, 2016, 12:02 AM
 */

#include <cstdlib>
#include "Grafo.h"
#include "Vertice.h"
#include"TablaHash.h"
#include <string>

using namespace std;


int main(int argc, char** argv) {
    Grafo a =  Grafo();
    TablaHash b= TablaHash();
    
    Vertice* v1=a.insertarVertice("osama", 1);
    b.insertarUbicacion(v1);
    cout<<v1->getNombre()<<endl;
    
    v1=a.insertarVertice("Argolla", 1);
    b.insertarUbicacion(v1);
    cout<<v1->getNombre()<<endl;
    
    v1=a.insertarVertice("Sulli", 1);
    b.insertarUbicacion(v1);
    cout<<v1->getNombre()<<endl;
    return 0;
}

