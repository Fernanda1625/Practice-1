#include<iostream> // librer�a de entrada y salida de datos

using namespace std; // poder imprimir en la pantalla

int main(){ // funci�n principal

	int arg1; //
	arg1=-1;
	int x,y,z;
	char myDouble= �5�;
	char arg1= �A�;
	cout<<arg1<<"\n";
	
	return 0; // retorno de un n�mero entero para que el programa detecte que finaliz� correctamente
}

/*
RESPUESTAS:
-	�Que sucede si declaramos el mismo nombre dos veces, se obtienen dos resultados diferentes?
	No, se produce un error porque no se pueden asignar a dos variables el mismo nombre. Solo reconocer� a la primera variable, en este caso el tipo entero.
-	�Tu programa compila, si es as�, que imprime, si no, que mensaje de error manda?
	No compila, el mensaje de error es que arg1 ya fue declarado anteriormente como un entero, y que se genera un conflicto por declarar dos variables con el mismo nombre.
*/
