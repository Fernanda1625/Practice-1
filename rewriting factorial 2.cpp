# include <iostream>
using namespace std;

int main(){
	int number;
    cout << "Enter a number: ";
	cin >> number;
	switch (number){
		case 0: cout << "1\n";
		break;
		case 1: cout << "1\n";
		break;
		case 2: cout << "2\n";
		break;
		case 3: cout << "6\n";
		break;
		case 4: cout << "24\n";
		break;
		case 5: cout << "120\n";
		break;
		case 6: cout << "720\n";
		break;
		case 7: cout << "5040\n";
		break;
		case 8: cout << "40320\n";
		break;
		case 9: cout << "362880\n";
		break;
		case 10: cout << "3628800\n";
		break;
		default:
			cout << "NOT SUPPORTED" << endl;
			break;
		}
		return 0;
	}
