#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
	cout << endl << "1572. Matrix Diagonal Sum" << endl << endl << "Given a square matrix mat, return the sum of the matrix diagonals" << endl << "Only include the sum of all the elements on the primary diagonal and all the elements on the secondary diagonal that are not part of the primary diagonal." << endl << endl << "Example :" << endl << "Input: mat = [[1,2,3],[4, 5, 6],[7, 8, 9]]" << endl << "Output: 25" << endl << "Explanation: Diagonals sum : 1 + 5 + 9 + 3 + 7 = 25" << endl << endl;




	int m;
	cout << "Enter the order m: ";
	cin >> m;
	vector<vector<int>>matrica(m, vector<int>(m));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Enter the A(" << i + 1 << ")(" << j + 1 << ") element: ";
			cin >> matrica[i][j];
		}
	}
	int sum = 0;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (i == j || i + j == m - 1) {
				sum += matrica[i][j];
			}

		}

	}
		cout << "The sum of all the diagonal elements are: " << sum << endl;


	return 0;
}