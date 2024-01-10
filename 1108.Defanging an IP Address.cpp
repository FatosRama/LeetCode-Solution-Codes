#include <iostream>
#include<vector>
#include <string>
using namespace std;

int main() {
	cout << endl << "1108. Defanging an IP Address" << endl << endl << "Given a valid (IPv4) IP address, return a defanged version of that IP address." << endl << "A defanged IP address replaces every period \".\" with \"[.]\"." << endl << endl << "Example :" << endl << "Input: address = \"1.1.1.1\"" << endl << "Output: \"1[.]1[.]1[.]1\"" << endl << endl;

	string address;
	cout << "Enter the IP address (XXX.XXX.XXX.XXX - format): ";
	cin >> address;

	string ans;
	for (int i = 0; i <= address.length(); i++) {
		if (address[i] == '.') {
			ans += "[.]";
			continue;
		}
		ans += address[i];
		
		
	}
	cout << "Answer: "<<ans << endl;
	







	return 0;
}