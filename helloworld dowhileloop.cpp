#include<iostream> // librería de entrada y salida de datos

using namespace std; // poder imprimir en la pantalla

int main(){ // función principal

	int n; // se crea una variable de tipo entero
	cin>>n; // se pide que ingrese el valor entero
	
	do{// hacer...
		cout<<"Hello, World!\n";// se imprime el mensaje las veces que el usuario indique
	}
	while (--n >0);//mientras el valor n decrementado llegue a cero
	
	return 0; // retorno de un número entero para que el programa detecte que finalizó correctamente
}
