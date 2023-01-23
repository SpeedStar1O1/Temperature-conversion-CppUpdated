#include <iostream>
using namespace std;

int main() {

	// Temperature conversion in C++
	double temp;
	char unit;

	cout << "----- Temperature Conversion -----\n";
	cout << "----- By: SpeedStar101 -----\n";
	cout << "F = Fahrenheit\n";
	cout << "C = Celsius\n";
	cout << "What unit would you like to convert to?: ";
	cin >> unit;

	switch(unit){
		case 'F':
        case 'f':
		    cout << "Enter the Temperature in Celsius: ";
		    cin >> temp;

		    temp = (1.8 * temp) + 32;
		    cout << "Temperature is: " << temp << "F\n";
        break;

        case 'c':
		case 'C':
            cout << "Enter the Temperature in Fahrenheit: ";
		    cin >> temp;

		    temp = (temp - 32) / 1.8;
		    cout << "Temperature is: " << temp << "C\n";
        break;

        default:
            cout << "-------------------------------------\n";
            cout << "Not a valid unit.\n";
            cout << "Please enter a valid unit. (F/C) \n";

	}

	
	cout << "-------------------------------------";
	return 0;
}