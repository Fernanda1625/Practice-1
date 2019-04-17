# include <iostream>
using namespace std;

int main(){

	while (true){
	short number;
	cout << "Enter a number: ";
	cin >> number;
	if (number > 0 && number < 24){
        cout << "The factorial of: " << number << " is " ;
	int accumulator = 1;
	for (; number > 0; accumulator *= number--);
	cout << accumulator << "\n";
 	}
	else
	cout << "I dont know!"<<endl;
	}
	return 0;
}
