#ifndef GRAFO_H
#define	GRAFO_H
#include "Vertice.h"
#include <iostream>
#include "ListaArcos.h"
#include "Arco.h"


using namespace std;
int const maxVertice =30;

 //lista listaMinimos;
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
        void insertarArco(int llaveOrigen,int llaveDestino, double distancia);
        void caminoCorto(Vertice* inicio, Vertice* final,int ubiMatriz, int ubicolumna);
        void caminoCortoRecursivo(Vertice* inicio, Vertice* final, Arco* ubiActual,int ubiAnterior, int ubiMatriz,int ubiCulumna);
        int getMaxVertice();
        void setMaxVertice();
        void recorreradyacencias (int pos, Vertice *destino);
         int  minimo;
        

private:
    
    Arco* adyacencia[maxVertice][maxVertice]; 
    Vertice* vertices[maxVertice];//actualizar el tamanio del arreglo con las ubicaciones
                                     

};

#endif	/* GRAFO_H */

