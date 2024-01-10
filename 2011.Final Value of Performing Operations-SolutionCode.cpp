#include <iostream>
#include <vector>
using namespace std;
 int main(){
     cout << endl << "2011. Final Value of Variable After Performing Operations" << endl << endl << "There is a programming language with only four operations and one variable X:" << endl << "++X and X++ increments the value of the variable X by 1." << endl << "--X and X-- decrements the value of the variable X by 1." << endl << "Initially, the value of X is 0." << endl << "Given an array of strings operations containing a list of operations, return the final value of X after performing all the operations." << endl << endl << "Example :" << endl << "Input: operations = [\"--X\",\"X++\",\"X++\"]" << endl << "Output: 1" << endl << "Explanation: The operations are performed as follows:" << endl << "Initially, X = 0." << endl << "--X: X is decremented by 1, X =  0 - 1 = -1." << endl << "X++: X is incremented by 1, X = -1 + 1 =  0." << endl << "X++: X is incremented by 1, X =  0 + 1 =  1." << endl << endl;


     int n;
     string op;

     cout << "Enter the amount of operations you want to type in: ";
     cin >> n;
     vector<string>operations(100);
     repeat:
     for (int i = 0; i < n; i++) {
         cout << "Type the " << i + 1 << " operation (X-- or --X, X++ or ++X): ";
         cin >> op;
         operations[i] = op;
         
         
     }


        int x = 0;
        for (int i = 0; i < operations.size(); i++) {
            if (operations[i] == "--X" || operations[i] == "X--") {
                x -= 1;
            }
            else if (operations[i] == "X++" || operations[i] == "++X") {
                x += 1;
            }
        }
        cout<<"Answer: "<<x<<endl;
        return 0;
    }
