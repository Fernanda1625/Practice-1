# include <iostream>
using namespace std;

int main(){
	while (true){ // bucle infinito
	 int n; // entero n
	 cin >> n; // se pide el numero
	 if (n%5 > 0){ // si el residuo del numero entre 5 es mayor que 0, entonces se muestra -1
		cout << "-1";
		continue; // se continua
	}
	cout << n/5 << endl; // se imprime el cociente del numero entre 5
	}
	return 0;
}
