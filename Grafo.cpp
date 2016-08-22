
#include "Grafo.h"

Grafo::Grafo() {
    for (int i = 0; i < maxVertice; i++) {
        vertices[i] = NULL;
        for (int f = 0; f < maxVertice; f++) {
            adyacencia[i][f] = NULL;
        }
    }
    minimo = 1000;
    // vertices = new Vertice[pmaxVertice];
}

Grafo::Grafo(const Grafo& orig) {
}

Grafo::~Grafo() {
}

Vertice* Grafo::insertarVertice(string nombre,string pdescripcion, int llave) {

    Vertice* nuevo = new Vertice(nombre,pdescripcion, llave);
    vertices[llave] = nuevo;
    return nuevo;

}

void Grafo::insertarArco(int llaveOrigen, int llaveDestino, double distancia) {
    Vertice* origen;
    Vertice* destino;
    for (int i = 0; i < maxVertice; i++) {
        if (vertices[i] != NULL) {
            if (llaveOrigen == vertices[i]->getPosMatriz()) {
                origen = vertices[i];
            }
            if (llaveDestino == vertices[i]->getPosMatriz()) {
                destino = vertices[i];
            }
        }
    }
    if (origen != NULL || destino != NULL) {
        Arco* aux = new Arco(destino, origen, distancia);
        adyacencia[llaveOrigen][llaveDestino] = aux;
    } else {
        cout << "Origen o destino invalidos" << endl;
    }
}

ListaArcos* Grafo::obtnerAdyacencias(int llave) {
    ListaArcos* listaAdYacencia = new ListaArcos();
    if (vertices[llave] != NULL) {
        for (int i = 0; i < maxVertice; i++) {
            Arco* aux = adyacencia[llave][i];
            if (aux != NULL) {
                listaAdYacencia->insertar(aux);
            }
        }
    }
    return listaAdYacencia;
}

//void Grafo::caminoCorto(int pinicio, int pfinal, int ubiMatriz, int ubicolumna) {
//    //Vertice* ubiActual = inicio;
//    Arco* aux;
//    Arco* vaux;
//    Vertice* inicio;
//    Vertice* final;
//    inicio = buscarVertice(pinicio);
//    final = buscarVertice(pfinal);
//    if (inicio != NULL || final != NULL) {
//        if (adyacencia[inicio->getPosMatriz()][final->getPosMatriz()] != NULL) {
//            aux = adyacencia[inicio->getPosMatriz()][final->getPosMatriz()];
//            aux->getDistancia();
//        } else {
//            for (int i = 0; i < maxVertice; i++) {
//                if (adyacencia[inicio->getPosMatriz()][i] != NULL) {
//                    aux = adyacencia [inicio->getPosMatriz()][i];
//                    minimo = aux->getDistancia();
//                    recorreradyacencias(aux->getDestino()->getPosMatriz(), final);
//                }
//            }
//        }
//    }else{
//        cout << "Inicio o destino invalidos"<<endl;
//    }
//
//}

Vertice* Grafo::buscarVertice(int llave) {

    Vertice* encontrado;
    if (vertices[llave] != NULL) {
        encontrado = vertices[llave];
    }
    return encontrado;
}

//void Grafo::recorreradyacencias(int pos, Vertice *destino) {
//    // int minaux;
//    for (int i = 0; i < maxVertice; i++) {
//        if (adyacencia[pos][i] != NULL) {
//            cout << adyacencia[pos][i] << endl;
//            // minaux=adyacencia[pos][i]->getDistancia();
//            if (adyacencia[pos][i]->getDestino() == destino) {
//                if (adyacencia[pos][i]->getDistancia() < minimo) {
//                    minimo += adyacencia[pos][i]->getDistancia();
//                    //listaminimos.agregar(adyacncias[pos][i]);
//                    cout << "minimo " << minimo << endl;
//                    cout << "lista " << adyacencia[pos][i]->getOrigen()->getPosMatriz() << endl;
//
//                }
//            }
//        }
//    }
//}

//void Grafo::caminoCorto(int pinicio, int pfinal,int ubiMatriz, int ubicolumna) {
//   //Vertice* ubiActual = inicio;
//    Arco* aux;
//     Vertice* inicio;
//    Vertice* final;
//    inicio = buscarVertice(pinicio);
//    final = buscarVertice(pfinal);
//    int ubiAnt=ubiMatriz;
//    if (adyacencia[inicio->getPosMatriz()][final->getPosMatriz()]!= NULL) {
//        aux = adyacencia[inicio->getPosMatriz()][final->getPosMatriz()];
//        aux->getDistancia();
//    } else {
//        this->caminoCortoRecursivo(inicio, final, aux,ubiAnt, ubiMatriz,ubicolumna);
//    }
//
//}
//
//void Grafo::caminoCortoRecursivo(Vertice* inicio, Vertice* final, Arco* ubiActual,int ubiAnterior, int ubiMatriz,int ubiCulumna) {
//                           
//      //hacer un anterior aux
//    //if(ubiActual != NULL) && ubiActual->getDestino()->getPosMatriz()==final->getPosMatriz() ){
//            ubiActual = adyacencia[ubiMatriz][ubiCulumna];
//            if(ubiActual!=NULL){
//               ubiActual->setubiAnt(ubiAnterior); 
//            }
//            
//        if (ubiCulumna < maxVertice) {
//            if (ubiActual != NULL&&ubiActual->getVisitado()==false) {
//                // guardar en una listasimple arco
//                cout<<"listaVisitados---"<<ubiActual->getOrigen()->getNombre()<<"---destino---"<<ubiActual->getDestino()->getNombre()<<"---distacia---"<<ubiActual->getDistancia()<<endl;
//                ubiActual->setVisitado(true);
//               // ubiActual->getOrigen()->setVisitado(true);
//                if(ubiActual->getDestino()!=inicio){
//                    if(ubiActual->getDestino()==final){
//                        // encontrado=true;
//                        cout<<"ya lo encontre"<<endl;
//                        caminoCorto(inicio,final,inicio->getPosMatriz(),1);
//                    }
//                  caminoCortoRecursivo(inicio, final, ubiActual,ubiActual->getubiAnt(), ubiActual->getDestino()->getPosMatriz(),1);
//                }else{
//                    cout<<"no lo encontre"<<endl;
//                    caminoCortoRecursivo(inicio, final, ubiActual,ubiActual->getubiAnt(),ubiMatriz,ubiCulumna++);
//                }
//            }else{
//            ubiCulumna++;
//            caminoCortoRecursivo(inicio, final, ubiActual,ubiAnterior, ubiMatriz,ubiCulumna);
//            }
//        }else{
//            ubiCulumna=1;
//            
//        caminoCorto(inicio,final,ubiActual->getubiAnt(),ubiCulumna);
//    };
//}

// void Grafo::caminoCorto(Vertice* inicio, Vertice* final,int ubiMatriz, int ubicolumna) {
//     
//     for(int i=0;i<=maxVertice;i++){
//         if(encontrar(inicio->getPosMatriz()),i){
//             return adyacencia[inicio->getPosMatriz()],[i];
//         }
//     }
// }

// bool Grafo::encontrar(int i,int j) {
//  
//    if (adyacencia[i][j]!= NULL) {
//        return true;
//    }else{
//        return false;
//    }
// }

void Grafo::imprimirVertices(){
    cout<<"------------------------------------"<<endl;
    for(int i=0;i<=maxVertice;i++){
        if(vertices[i]!=NULL){
            cout<<i+1<<": "<<vertices[i]->getNombre()<<endl;
        }
        
    }
    cout<<"------------------------------------"<<endl;
    cout<<" "<<endl;
}