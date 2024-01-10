#include <iostream>
#include <vector>
using namespace std;

int main() {
	cout << endl << "1351. Count Negative Numbers in a Sorted Matrix" << endl << endl << "Given a m x n matrix grid which is sorted in non-increasing order both row-wise and column-wise, return the number of negative numbers in grid." << endl << endl << "Example :" << endl << "Input: grid = [[4,3,2,-1],[3,2,1,-1],[1,1,-1,-2],[-1,-1,-2,-3]]" << endl << "Output: 8" << endl << "Explanation: There are 8 negatives number in the matrix." << endl << endl;
	int n , m ;
	cout << "Enter the order n of the grid: ";
	cin >> n;
	cout << "Enter the order m of the grid: ";
	cin >> m;
	vector<vector<int>>grid(n, vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << "Enter the A(" << i + 1 << ")(" << j + 1 << ") element of the grid: ";
			cin >> grid[i][j];
		}
	}
	int count=0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (grid[i][j] < 0) {
				count++;
			}
		}
	}


	cout << "The number of negative numbers are: " << count << endl;




	return 0;
}