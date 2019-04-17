# include <iostream>
using namespace std;

int main(){
	while (true){ // ciclo eterno
		int n; // entero n
		cin>>n; // se pide que se ingrese un entero
		cout<< ((n%5 == 0 && n>=0 ? n/5 : -1))<<endl; // si el residuo de n entre 5 es cero y n es mayor o igual que cero entonces se muestra el cociente entre n y 5, de otro modo se muestra -1
		}
	return 0;
}
