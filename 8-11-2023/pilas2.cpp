#include <iostream>
#include <conio.h>
#include <stdlib.h>

struct NODO {
       int dato;
       NODO* siguiente;
};

void agregarPila(NODO*&, int);
void mostrarPila(NODO*);

int main(){
           NODO* pila = NULL;
           char continuar;
           
           do {
               int numero;
               std::cout << "ingrese un numero para agregar a la pila: ";
               std::cin >> numero;
               agregarPila(pila, numero);
               
               std::cout << "desea agregar otro numero a la pila? (S/N): ";
               std::cin >> continuar;
           
           } while (continuar == 'S' || continuar == 's');
           
           mostrarPila(pila);
           
           getch();
           return 0;
           
}

void agregarPila(NODO*& pila, int n) {
     NODO* nuevo_nodo = new NODO();
     nuevo_nodo->dato = n;
     nuevo_nodo->siguiente = pila;
     pila = nuevo_nodo;
}

void mostrarPila(NODO* pila) {
     std::cout << "Contenido de la pila:" << std::endl;
     while (pila != NULL) {
           std::cout << pila->dato << std::endl;
           pila = pila->siguiente;
     }
}
           
           
