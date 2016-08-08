
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
void Grafo::insertarArco(int llaveDestino, int llaveOrigen, double distancia){
    Vertice* origen;
    Vertice* destino;
    for(int i=0;i<sizeof(vertices);i++){
        if(llaveOrigen == vertices[i]->getPosMatriz()){
            origen=vertices[i];
        }
        if(llaveDestino == vertices[i]->getPosMatriz()){
            destino=vertices[i];
        } 
    }
    Arco* aux= new Arco(destino,origen,distancia);
    adyacencia[llaveOrigen][llaveDestino]=aux;
}

ListaArcos* Grafo::obtnerAdyacencias(int llave){
    ListaArcos* listaAdYacencia=new ListaArcos();
    for(int i=0;i<maxVertice;i++){
        Arco* aux=adyacencia[llave][i];
        if(aux!=NULL){
            listaAdYacencia->insertar(aux);
        }
    }
    return listaAdYacencia;
}