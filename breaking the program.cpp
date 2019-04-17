/*
-   ¿Si la entrada en el programa anterior es -1, cual es la salida?
	La salida es 1.
-   ¿Como modificarias el programa para que salida sea correcta?
*/

# include <iostream>
using namespace std;

int main(){
	
	while (true){
	short number;
	cout << "Enter a number: ";
	cin >> number;
	if (number<0){
		cout <<"The factorial of this number doesn´t exist." <<endl;
		}
 	else
	cout << "The factorial of: " << number << " is " ;
	int accumulator = 1;
	for (; number > 0; accumulator *= number--);
	cout << accumulator << "\n";
	}
	return 0;
}
