#include <iostream>
#include<vector>
using namespace std;

int main() {
	cout << endl << "2469. Convert the Temperature" << endl << endl << "You are given a non-negative floating point number rounded to two decimal places celsius, that denotes the temperature in Celsius." << endl << "You should convert Celsius into Kelvin and Fahrenheit and return it as an array ans = [kelvin, fahrenheit]." << endl << "Return the array ans. Answers within 10-5 of the actual answer will be accepted." << endl << endl << "Note that:" << endl << "Kelvin = Celsius + 273.15" << endl << "Fahrenheit = Celsius * 1.80 + 32.00" << endl << endl << "Example :" << endl << "Input: celsius = 36.50" << endl << "Output: [309.65000,97.70000]" << endl << "Explanation: Temperature at 36.50 Celsius converted in Kelvin is 309.65 and converted in Fahrenheit is 97.70." << endl << endl;
	double celsius;
	cout << "Enter the value of Celsius: ";
	cin >> celsius;



	cout << "[" << celsius + 273.15 << " K, " << celsius * 1.80 + 32 << " F]" << endl;

	




	return 0;
}