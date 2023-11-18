#include<iostream>
//#include<curses.h>
#include<stdlib.h>
#include <string>
using namespace std;
struct Cliente{
	string nombre;
	int id;
	int dinero;
	string correo; 
};
struct Nodo{
	Cliente* cliente;
	Nodo *siguiente;
};
//Prototipos de Funciones
void menu();
void insertarCola(Nodo *&,Nodo *&,Cliente*);
bool cola_vacia(Nodo *);
void suprimirCola(Nodo *&,Nodo *&,Cliente*&);
int main(){
	menu();
	//getch();
	return 0;
}
void menu(){
	int opc;

	Nodo *frente = NULL;
	Nodo *fin = NULL;
	do{
		cout<<"\t.:MENU:.\n";
		cout<<"1. Ingresar un cliente al Banco"<<endl;
		cout<<"2. Mostrar todos los clientes del banco"<<endl;
		cout<<"3. Salir"<<endl;
		cout<<"Opcion: ";
		cin>>opc;
		Cliente* cliente = new Cliente();
		switch(opc){
			case 1: cout<<"\nIngrese el nombre del cliente: ";
					cin>>cliente->nombre;
					cout<<"\nIngrese el ID del cliente: ";
					cin>>cliente->id;
					cout<<"\nIngrese el dinero del cliente: ";
					cin>>cliente->dinero;
					cout<<"\nIngrese el correo del cliente: ";
					cin>>cliente->correo;
					insertarCola(frente,fin,cliente);
					break;
			case 2: cout<<"\nMostrando los clientes del banco: \n";
			
					cout<<"| Nombre | ID | Dinero | Correo | \n";
					while(frente != NULL){
						suprimirCola(frente,fin,cliente);
							cout<<"| "<<cliente->nombre<<" | "<<cliente->id<<" | "<<cliente->dinero<<" | "<<cliente->correo<<"|\n";
					}
					cout<<"\n";
					system("pause");
					break;
			case 3: break;
		}
		system("cls");
	}while(opc != 3);
}
//Funcion para insertar elementos en la cola
void insertarCola(Nodo *&frente,Nodo *&fin, Cliente*cliente){
	Nodo *nuevo_nodo = new Nodo();
	nuevo_nodo->cliente = cliente ;
	nuevo_nodo->siguiente = NULL;

	if(cola_vacia(frente)){
		frente = nuevo_nodo;
	}
	else{
		fin->siguiente = nuevo_nodo;
	}
	fin = nuevo_nodo;
}
//Funcion para determinar si la cola está vacía
bool cola_vacia(Nodo *frente){
	return (frente == NULL)? true : false;
}
//Funcion para eliminar elementos de la cola
void suprimirCola(Nodo *&frente,Nodo *&fin,Cliente*&cliente){
	cliente = frente->cliente;
	Nodo *aux = frente;
    if(frente == fin){
        frente = NULL;
        fin = NULL;
	}
	else{
		frente = frente->siguiente;
	}
	delete aux;
}

