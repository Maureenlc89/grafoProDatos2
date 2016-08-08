#ifndef GRAFO_H
#define	GRAFO_H
#include "Vertice.h"
#include <iostream>
#include "ListaArcos.h"

using namespace std;
int const maxVertice =30;
class Grafo {
public:
// hacer case con las ubicaciones y laves
	Grafo();
	Grafo(const Grafo& orig);
	virtual ~Grafo();
        Vertice* insertarVertice(string nombre,int llave);//el vertice debería tener un lista simple de adyacencias, usar el indice del arreglo de vertices
        //  void insertarAdyacencia();
        ListaArcos* obtnerAdyacencias(int llave);
        Vertice obtenerVertice(int llave);
        void insertarArco(int llaveDestino,int llaveOrigen, int distancia);
        //falta metodo buscar destancia as corta
        int getMaxVertice();
        void setMaxVertice();
        

private:
    
    Arco* adyacencia[maxVertice][maxVertice]; 
    Vertice* vertices[maxVertice];//actualizar el tamanio del arreglo con las ubicaciones
                                     

};

#endif	/* GRAFO_H */

