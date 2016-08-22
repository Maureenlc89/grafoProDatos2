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

/*
 * comentario nuevo Joseeeeeeeee
 */

//int main(int argc, char** argv) {
////    Grafo a =  Grafo();
////    TablaHash b= TablaHash();
////    
////    Vertice* v1=a.insertarVertice("jose", 0);
////    b.insertarUbicacion(v1);
////    cout<<v1->getNombre()<<endl;
////    
////    Vertice* v2=a.insertarVertice("mauren", 1);
////    b.insertarUbicacion(v2);
////    cout<<v2->getNombre()<<endl;
////    
////    Vertice* v3=a.insertarVertice("Sulli",2);
////    b.insertarUbicacion(v3);
////    cout<<v3->getNombre()<<endl;
////    
////   Vertice* v4=a.insertarVertice("TorresGemelas", 3);
////    b.insertarUbicacion(v4);
////    cout<<v4->getNombre()<<endl;
////    
////    Vertice* v5=a.insertarVertice("ucenfotec", 4);
////    b.insertarUbicacion(v5);
////    cout<<v5->getNombre()<<endl;
////    
////    Vertice* v6=a.insertarVertice("ratas de purral", 5);
////    b.insertarUbicacion(v6);
////    cout<<v6->getNombre()<<endl;
////    
////    a.insertarArco(1,4,1);
////    a.insertarArco(1,2,5);
////    a.insertarArco(1,3,7);
////    a.insertarArco(2,3,2);
////    a.insertarArco(2,1,10);
////    a.insertarArco(3,1,1);
////    a.insertarArco(3,2,1);
////    a.insertarArco(3,5,4);
////    //1-2
////    //2-1 no encontro
////    //2-5 lo encontre
////    //1-3
////    //3-2 no encontrado
////    //3-6 no encontrao
////    
////    
////    
////    a.caminoCorto(v1,v5,1,1);
////    //a.caminoCorto(v2,v4,2,1);
////   // a.caminoCorto(v3,v6,3,1);
//    
//    
//    return 0;
//}

#include <cstdlib>
#include "Gestor.h"
//#include <iostream>
//#include <string>

using namespace std;

/*
 * 
 */
Gestor * g = new Gestor();
int main(int argc, char** argv) {
     
    int opc;
  bool noSalir = true;
 
    do{
      void mostrarMenu();
        int leerOpcion();
        bool ejecutarAccion(int);
     mostrarMenu();
        opc =leerOpcion();
        noSalir =ejecutarAccion(opc);
    }while (noSalir);
    
    
        
    return 0;
}
  void mostrarMenu(){
 
        
        cout<<"1.  Buscar ubicacion"<<endl;
        cout<<"2.  Buscar Adyacencias "<<endl;
        cout<<"3.  Buscar camino"<<endl;
        cout<<endl;
        
    }
int leerOpcion(){
        int opcion;
 
        cout<<"Seleccione su opciÃ³n: "<<endl;
        cin>>opcion;
        cout<<endl;
 
        return opcion;
    
}
void mostrarMenuLocalidad(){
    cout<< "Escoja la ubicacion : "<<endl;
    
    cout<<endl;
}
bool ejecutarAccion(int popcion){
 
 
        bool noSalir = true;
        int llaveUbi;
 
        switch(popcion){
           
            case 1: //Buscar Ubicacion
                g->imprimirVertices();
                mostrarMenuLocalidad();
                cin>>llaveUbi;
                g->buscarUbicacion(llaveUbi-1);
              
                break;
            
            case 2:// buscar adyacencias
                g->imprimirVertices();
                mostrarMenuLocalidad();
                cin>>llaveUbi;
                g->buscarAdyacencias(llaveUbi-1);
               
                break;
 
            case 3: //Liberar reservacion
                
               
                break;
               
            case 4: // Mostrar a la lista de espera
                
                
                break;

            case 5: //sentar lista espera
                
                
               
                break;
            case 6: //iniciar Funcion
               
                break;
 
            case 7: //Salir de la aplicacion
 
                noSalir = false;
                break;
 
            default: //Cualquier otro valor dado por el usuario se considera invÐ±lido
 
                break;
        }
        return noSalir;
    }