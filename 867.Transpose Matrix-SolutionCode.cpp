#include <iostream>
#include<vector>
using namespace std;

int main() {
    cout << endl << "867. Transpose Matrix" << endl << endl << "Given a 2D integer array matrix, return the transpose of matrix." << endl << "The transpose of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices." << endl << endl << "Example :" << endl << "Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]" << endl << "Output: [[1,4,7],[2,5,8],[3,6,9]]" << endl << endl;


     int n ;
     cout << "Enter the value of the order n : ";
     cin >> n;
     vector<vector<int>>matrix(n, vector<int>(n));
     for (int i = 0; i < n; i++) {
         for (int j = 0; j < n; j++) {
             cout << "Enter a value to the A(" << i + 1 << ")(" << j + 1 << ") elemenent of the matrix: ";
             cin >> matrix[i][j];
         }
    }

    vector<vector<int>> res(n, vector<int>(n, 0));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++) {
            res[j][i] = matrix[i][j];

            
        }
}
    cout << "Transposed matrix: [";
    for (int i = 0; i < n; i++) {
        
        cout << "[";
        for (int j = 0; j < n; j++) {
            if (j == n - 1) {
                cout << res[i][j] << "]";
                continue;
            }
            cout << res[i][j] << ",";
        }
        
    }
    cout << "]" << endl;




	return 0;
}