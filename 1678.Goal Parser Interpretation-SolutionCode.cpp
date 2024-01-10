#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	cout << endl << "1678. Goal Parser Interpretation" << endl << endl << "You own a Goal Parser that can interpret a string command. " << endl << "The command consists of an alphabet of \"G\", \"()\" and/or \"(al)\" in some order. " << endl << "The Goal Parser will interpret \"G\" as the string \"G\", \"()\" as the string \"o\", and \"(al)\" as the string \"al\"." << endl << "The interpreted strings are then concatenated in the original order." << endl << "Given the string command, return the Goal Parser's interpretation of command." << endl << endl << "Example :" << endl << "Input: command = \"G()(al)\"" << endl << "Output: \"Goal\"" << endl << "Explanation: The Goal Parser interprets the command as follows:" << endl << "G -> G" << endl << "() -> o" << endl << "(al) -> al" << endl << "The final concatenated result is \"Goal\"." << endl << endl;

	string command;
	cout << "Enter the Goal using \"G\",\"()\" or \"(al)\": ";
	cin >> command;

	string ans;
	for (int i = 0; i < command.length(); i++) {
		
			char c = command[i];
			if (c == 'G') {
				ans += c;

			}
			else if (c == '(') {
				ans += command[i + 1] == ')' ? "o" : "al";
			}
		}



	cout << "Interpretation: " << ans << endl;
	return 0;
	}
	
	










