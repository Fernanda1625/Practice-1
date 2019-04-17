#include <iostream> // libreria de entrada y salida
using namespace std; // permite mostrar mensajes en pantalla

int main(){ // funcion principal
	int n; // variable entera n
	cin>> n; // se pide el total de numeros primos que se mostraran en pantalla
	for (int i=2; n>0; i++){ // ciclo que empezará en el primer numero primo mientras n sea mayor que 0
		bool esPrimo = true; // variable booleana que es verdadera al principio
		for (int j=2; j<i; j++){ // otro ciclo que se realizará hasta que j sea menor que i
			if (i%j==0){ // se compara cada numero hasta demostrar que...
				esPrimo = false; // si el numero no es primo tendra que ser divido por otro diferente entre el 1 y si mismo, y por ello la variable booleana cambia...
				break; // y se detiene el ciclo
			}
		}
		if (esPrimo){ // si es que la variable booleana no cambia, entonces...
			--n; // hasta llegar n...
			cout<<i<<endl; // se mostraran los numeros primos.
		}
	}
	return 0; // se retorna un valor entero como muestra de que el programa finalizó bien
}

