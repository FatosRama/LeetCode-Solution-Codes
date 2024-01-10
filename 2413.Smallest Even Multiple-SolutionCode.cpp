#include <iostream>
using namespace std;

int main() {
	cout << endl << "2413. Smallest Even Multiple" << endl << endl << "Given a positive integer n, return the smallest positive integer that is a multiple of both 2 and n." << endl << "Example :" << endl << "Input: n = 5" << endl << "Output: 10" << endl << "Explanation: The smallest multiple of both 5 and 2 is 10." << endl << endl;
	

	int n;
	cout << "Enter the value of n: ";
	cin >> n;
	int s = n / 2;
	if (n == s * 2) {
		cout <<"The smallest multiple: "<< n;
	}
	else {
		cout <<"The smallest multiple: "<< n * 2;
	}

	





	return 0;
}