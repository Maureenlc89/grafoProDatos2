
#include "Grafo.h"

Grafo::Grafo() {
    for(int i=0;i<maxVertice;i++){
        vertices[i]=NULL;
        for(int f=0;f<maxVertice;f++){
            adyacencia[i][f]=NULL;
        } 
    }
   // vertices = new Vertice[pmaxVertice];
}

Grafo::Grafo(const Grafo& orig) {
}

Grafo::~Grafo() {
}
Vertice* Grafo::insertarVertice(string nombre, int llave){
    Vertice* nuevo = new Vertice(nombre,llave);
     vertices[llave]=nuevo;
     return nuevo;
    
}