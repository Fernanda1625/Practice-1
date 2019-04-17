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
RESPUESTAS:
- 	¿Que sucede si declaramos una varible en un bloque, y luego redeclaramos la misma variable en un bloque anidado?
	Al estar anidado lo toma como un bloque aparte, es por eso que imprime la variable que se encuentra dentro.
-   ¿Compila tu programa, si es asi que imprime, si no, que mensaje de error manda?
	Si compila impriendo el caracter A.
*/
