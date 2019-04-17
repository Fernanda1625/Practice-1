# include <iostream>
using namespace std;

int main(){
	short number;
	cout << "Enter a number: ";
	cin >> number;
	
	cout << "The factorial of: " << number << " is " ;
	int accumulator = 1;
	for (; number > 0; accumulator *= number--);
	cout << accumulator << "\n";
	
	return 0;
}

/*
-   ¿Que obtienes cuando ingresas estos valores: ?
	-   0  : 1
	-   1  : 1
	-   2  : 2
	-   9  : 362880
	-   10 : 3628800
*/

