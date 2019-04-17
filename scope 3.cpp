#include<iostream> // librería de entrada y salida de datos

using namespace std; // poder imprimir en la pantalla

int main(){ // función principal

	int arg1; //
	arg1=-1;
	{
		char arg1='A';
		cout << arg1 << "\n";
	}

 	return 0; // retorno de un número entero para que el programa detecte que finalizó correctamente
}

/*
-	¿Suponga que una variable tiene dos declaraciones, una fuera del bloque y otra anidada, y si el nombre es accedido dentro del bloque, que declaraion es usada?
	La que esta dentro del bloque.
*/
