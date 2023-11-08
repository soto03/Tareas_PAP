#include <iostream>
#include <conio.h>

using namespace std;
int main(){
	int numeros[3][3];
	int filas;
	int columnas;
	filas = 3;
	columnas = 3;
	for (int i=0; i<filas;i++){
		for (int j = 0 ; j < columnas;j++){
			cout<<"digite un numero["<<i<<"]"<<"["<<j<<"]";
			cin>>numeros[i][j];
		}
	}
	cout<<"la diagonal secundaria es: ";
	cout<<numeros[0][2]<<' '<<numeros[1][1]<<" "<<numeros[2][0];  
	
	getch();
	return 0;
}

