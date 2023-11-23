#include <conio.h>
#include <stdlib.h>
#include <iostream>

using namespace std;

struct Nodo
{
    int dato;
    Nodo* sgt;
};
//Insertar datos
void insertar(Nodo* lista_enlazada, int dato);
//Eliminar datos
void eliminar(Nodo*& lista_enlazada, int& dato);
//Mostrar datos
void mostrar(Nodo* lista_enlazada, int dato);
//Buscar datos
void buscar(Nodo* lista_enlazada, int dato);

int main(){



return 0;
}

void insertar(Nodo* lista_enlazada, int dato){
    Nodo* nuevo_nodo = new Nodo();
    nuevo_nodo -> dato = dato;
    nuevo_nodo -> sgt = NULL;
    Nodo* aux = lista_enlazada;
    while (aux->sgt != NULL)
    {
        aux = aux -> sgt;
    }
    aux -> sgt = nuevo_nodo;
    delete aux;
}

void eliminar(Nodo*& lista_enlazada, int& dato){
    Nodo* aux = lista_enlazada;
    dato = aux -> dato;
    lista_enlazada = aux -> sgt;
    delete aux;
}

void mostrar(Nodo* lista_enlazada, int dato){
    cout<<"\nMostrando los elementos de la lista enlazada ";
    while(lista_enlazada != NULL || dato != NULL ){
        eliminar(lista_enlazada, dato);
        if(lista_enlazada != NULL){
            cout<<dato<<" , ";
                }
        else{
            cout<<dato<<".";
            }
        }
}