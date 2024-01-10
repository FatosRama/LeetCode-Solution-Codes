#include <iostream>
using namespace std;

int main() {
	cout << endl << "2769. Find the Maximum Achievable Number" << endl << endl << "You are given two integers, num and t." << endl << "An integer x is called achievable if it can become equal to num after applying the following operation no more than t times:" << endl << "Increase or decrease x by 1, and simultaneously increase or decrease num by 1." << endl << "Return the maximum possible achievable number. It can be proven that there exists at least one achievable number." << endl << endl << "Example :" << endl << "Input: num = 4, t = 1" << endl << "Output: 6" << endl << "Explanation: The maximum achievable number is x = 6; it can become equal to num after performing this operation:" << endl << "1- Decrease x by 1, and increase num by 1. Now, x = 5 and num = 5. " << endl << "It can be proven that there is no achievable number larger than 6." << endl << endl;
	
	int num, t;
	cout << "Enter the number: ";
	cin >> num;
	cout << "Enter the amount of times: ";
	cin >> t;



	cout << "The Maximum Achievable number is: " << num + 2 * t << endl;



	return 0;
}