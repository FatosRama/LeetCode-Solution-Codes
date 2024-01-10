#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	cout << endl << "771. Jewels and Stones" << endl << endl << "You're given strings jewels representing the types of stones that are jewels, and stones representing the stones you have." << endl << "Each character in stones is a type of stone you have. You want to know how many of the stones you have are also jewels." << endl << "Letters are case sensitive, so \"a\" is considered a different type of stone from \"A\"." << endl << endl << "Example :" << endl << "Input: jewels = \"aA\", stones = \"aAAbbbb\"" << endl << "Output: 3" << endl << endl;

	string jewels = "z";
	string stones = "ZZ";
	cout << "Enter the jewels: ";
	cin >> jewels;
	cout << "Enter the stones: ";
	cin >> stones;
	
	int count = 0;
	for (int i = 0; i < stones.length(); i++) {
		for (int j = 0; j < jewels.length(); j++) {
			if (stones[i] == jewels[j]) {
				count++;
			}
		}
	}
	cout << "The amount of jewels found: "<<count<<endl;







	return 0;
}