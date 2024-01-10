#include <iostream>
#include <vector>
using namespace std;

int main() {
	cout << endl << "1672. Richest Customer Wealth" << endl << endl << "You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has." << endl << "A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth." << endl << endl << "Example :" << endl << "Input: accounts = [[1,2,3],[3,2,1]]" << endl << "Output: 6" << endl << "Explanation:" << endl << "1st customer has wealth = 1 + 2 + 3 = 6" << endl << "2nd customer has wealth = 3 + 2 + 1 = 6" << endl << "Both customers are considered the richest with a wealth of 6 each, so return 6" << endl << endl;


	int n, m,w;
	cout << "Enter the amount of customers: ";
	cin >> n;
	cout << "Enter the amount of banks per customer: ";
	cin >> m;
	vector<vector<int>>ans(n, vector<int>(m));
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Enter the " << j + 1 << " wealth of " << i + 1 << " customer: ";
			cin >> w;
			ans[i][j] = w;
		}
	}
	int max = 0,t=0;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			
			t += ans[i][j];
		}
		if (t > max) {
			max = t;
		}
		

		t = 0;
		continue;
	}


	cout << "The richest customer wealth: " << max << endl;;


	return 0;
}