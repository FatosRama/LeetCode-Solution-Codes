#include <iostream>
using namespace std;

int main() {
	cout << endl << "2894. Divisible and Non-divisible Sums Difference" << endl << endl << "You are given positive integers n and m." << endl << "Define two integers, num1 and num2, as follows:" << endl << "num1: The sum of all integers in the range [1, n] that are not divisible by m." << endl << "num2: The sum of all integers in the range [1, n] that are divisible by m." << endl << "Return the integer num1 - num2." << endl << "Example :" << endl << "Input: n = 10, m = 3" << endl << "Output: 19" << endl << "Explanation: In the given example:" << endl << "- Integers in the range [1, 10] that are not divisible by 3 are [1,2,4,5,7,8,10], num1 is the sum of those integers = 37." << endl << "- Integers in the range [1, 10] that are divisible by 3 are [3,6,9], num2 is the sum of those integers = 18." << endl << "We return 37 - 18 = 19 as the answer." << endl << endl;

	int n; int m;
	cout << "Enter the range n: ";
	cin >> n;
	cout << "Enter the divisible: ";
	cin >> m;

	int num1 = 0, num2 = 0;
	for (int i = 0; i <=n; i++) {
		if (i % m == 0) {
			num2 += i;
		}
		else {
			num1 += i;
		}
	}
	cout << num1 - num2;









	return 0;
}