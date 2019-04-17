#include<iostream> // librería de entrada y salida de datos
using namespace std; // poder imprimir en pantalla
int main(){ // funcion principal
	int n; // variable entera n
	cin>>n; // recibe un entero n de usuario
	int first = 0; // se inicializa una variable entero en 0
	cin>>first; // se toma el primer valor
	int max = first; // se asigna una varible entera el primer valor
	int min =first; // se asigna a otra variable entera el primer valor
	for (int i=1;i<n;i++){ // se hace un ciclo desde 1 hasta n-1
		int a; // se declara otra variable entera
		cin>>a; // se recibe valor de la variable
		first+=a; // se va sumando el primer valor con cada valor nuevo ingresado
		if (a<min){ // si cada valor es menor que el primero...
			min=a; // se asigna como nuevo numero menor el ingresado
		}
		if (a>max){ // si cada valor es mayor que el primero...
			max=a; // se asigna como nuevo numero mayor el ingresado
		}
	}
	
	cout<< "La media: " << (double)first/n << endl; // la media es el doble de la suma entre el total de numeros
	cout<< "El maximo: " << max << endl; // se muestra cual es maximo
	cout<< "El minimo: " << min << endl; // se muestra el minimo
	cout<< "El rango: " << max - min; // el rango es la resta del maximo y el minimo
	
	return 0; // retorna un entero para finalizar el programa correctamente
}
