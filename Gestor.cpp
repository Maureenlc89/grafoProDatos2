/*
 * To change this license header, choose License Headers in Project Properties->
 * To change this template file, choose Tools | Templates
 * and open the template in the editor->
 */

/* 
 * File:   Gestor->cpp
 * Author: suhu2
 * 
 * Created on August 21, 2016, 11:42 PM
 */

#include "Gestor.h"

Gestor::Gestor() {
    grafo= new Grafo();
    tablaHash= new TablaHash();
    insertarInfo();
}

Gestor::Gestor(const Gestor& orig) {
}

Gestor::~Gestor() {
}
void Gestor::insertarInfo(){
    
    Vertice* v1=grafo->insertarVertice("jose","osama", 0);
    tablaHash->insertarUbicacion(v1);
   
    
    Vertice* v2=grafo->insertarVertice("mauren","", 1);
    tablaHash->insertarUbicacion(v2);
    
    
    Vertice* v3=grafo->insertarVertice("Sulli","",2);
    tablaHash->insertarUbicacion(v3);
    
    
   Vertice* v4=grafo->insertarVertice("TorresGemelas","", 3);
    tablaHash->insertarUbicacion(v4);
   
    
    Vertice* v5=grafo->insertarVertice("ucenfotec","", 4);
    tablaHash->insertarUbicacion(v5);
   
    
    Vertice* v6=grafo->insertarVertice("ratas de purral","", 5);
    tablaHash->insertarUbicacion(v6);
   
    
    grafo->insertarArco(0,4,1);
    grafo->insertarArco(0,2,5);
    grafo->insertarArco(0,3,6);
    grafo->insertarArco(1,3,2);
    grafo->insertarArco(1,0,10);
    grafo->insertarArco(2,1,1);
    grafo->insertarArco(2,0,1);
    grafo->insertarArco(2,5,4);
}

void Gestor::imprimirVertices(){
    grafo->imprimirVertices();
}

void Gestor::buscarUbicacion(int pllave){
    Vertice * aux;
    pllave=tablaHash->funcionHash(pllave);
    aux= tablaHash->getCabezaLista(pllave);
    aux=tablaHash->recorrerListaVertices(aux,pllave);
    
    cout<<"-------------------------"<<endl;
    cout<<"la ubicacion: "<<aux->getNombre()<<endl;
    cout<<"Descripcion: "<<aux->getDescripcion()<<endl;
    cout<<"-------------------------"<<endl;
    cout<<" "<<endl;
    
}

void Gestor::buscarAdyacencias(int pllave){
    pllave=tablaHash->buscarAdyacencias(pllave);
    ListaArcos* lista=grafo->obtnerAdyacencias(pllave);
    Arco* aux=lista->getCabeza();
    cout<<"La ubicacion "<<aux->getOrigen()->getNombre()<<" tiene como adyacencias:"<<endl;
    
    int cont=1;
    while(aux!=NULL){
        cout<<cont<<". "<<aux->getDestino()->getNombre()<<endl;
        aux=aux->getSiguiente();
        cont++;
    }
    
}