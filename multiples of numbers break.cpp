# include <iostream>
using namespace std;

int main(){
	cout <<"If you want to finish, enter -1"<<endl; // mensaje para indicar que si desea finalizar el bucle debe ingresar -1
	while (true){ // bucle infinito
        int n; // entero n
		cin >> n; // se pide que se ingrese el entero n
		if (n%5 > 0){ // si el residuo del numero con 5 es mayor que 0...
			cout << "-1"<<endl; // se muestra -1
			continue; // se continua con el programa
		}
		if (n==-1){ // si se ingresa -1 el programa finaliza
			break;
		}
		cout << n/5 << endl; // se muestra el cociente del numero entre 5
	}
	cout << "BYE!"<< endl; // mensaje de despedida cuando el programa finalice
	return 0;
}
