#include <iostream>
#include <conio.h>
#include <cstdlib>

using namespace std;
int main(){
	int numeros[100][100];
	int filas;
	int columnas;
	cout<<"escriba el numero de filas: "; cin>>filas;
	cout<<"escriba el numero de columnas "; cin>>columnas;
	for (int i=0; i<filas;i++){
		for (int j = 0 ; j < columnas;j++){
			numeros[i][j] = rand();
		}		
	}
	int numeros2[100][100];
	for (int i=0; i<filas;i++){
		for (int j = 0 ; j < columnas;j++){
			numeros2[i][j] = numeros[i][j];
		}
	}
	for (int i=0; i<filas;i++){
		for (int j = 0 ; j < columnas;j++){
			cout<<numeros2[i][j]<<" ";
		}
		cout<<"\n";
	}
}
