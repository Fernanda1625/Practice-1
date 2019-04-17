#include<iostream> // librería de entrada y salida de datos

using namespace std; // poder imprimir en la pantalla

int main(){ // función principal

	int n; // se crea una variable de tipo entero
	cin>>n; // se pide que ingrese el valor entero
	for(;n-- >0;){// un ciclo en el que el valor de n ingresado va decrementando hasta que llegue a cero
		cout<<"Hello, World!\n";// se imprime el mensaje las veces que el usuario indique
	}
	
	return 0; // retorno de un número entero para que el programa detecte que finalizó correctamente
}
