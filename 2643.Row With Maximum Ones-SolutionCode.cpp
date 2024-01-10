#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout << endl << "2643. Row With Maximum Ones" << endl << endl << "Given a m x n binary matrix mat, find the 0-indexed position of the row that contains the maximum count of ones, and the number of ones in that row." << endl << "In case there are multiple rows that have the maximum count of ones, the row with the smallest row number should be selected." << endl << "Return an array containing the index of the row, and the number of ones in it." << endl << endl << "Example :" << endl << "Input: mat = [[0,1],[1,0]]" << endl << "Output: [0,1]" << endl << "Explanation: Both rows have the same number of 1's. So we return the index of the smaller row, 0, and the maximum count of ones (1). So, the answer is [0,1]. " << endl << endl;

    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    vector<vector<int>>mat(n, vector<int>(m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Enter the values of A(" << i + 1 << ")(" << j + 1 << ") elements of the matrix(0 and 1 ONLY): ";
            cin >> mat[i][j];
        }
    }
    vector<int> ans = { 0, 0 };
    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        for (int j = 0; j < m; ++j)
            if (mat[i][j] == 1)
                ++cnt;

        if (cnt > ans[1])
            ans = { i, cnt };

        
    }
    cout << "Ans[";
    for (int i = 0; i < ans.size(); i++) {
        if (i == ans.size() - 1) {
            cout << ans[i] << "]" << endl;
        }
        cout << ans[i]<<",";
    }
    

	return 0;
}

