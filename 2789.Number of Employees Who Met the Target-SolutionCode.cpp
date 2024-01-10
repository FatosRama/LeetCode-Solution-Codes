#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout << endl << "2798. Number of Employees Who Met the Target" << endl << endl << "There are n employees in a company, numbered from 0 to n - 1. Each employee i has worked for hours[i] hours in the company." << endl << "The company requires each employee to work for at least target hours." << endl << "You are given a 0-indexed array of non-negative integers hours of length n and a non-negative integer target." << endl << "Return the integer denoting the number of employees who worked at least target hours." << endl << endl << "Example :" << endl << "Input: hours = [0,1,2,3,4], target = 2" << endl << "Output: 3" << endl << "Explanation: The company wants each employee to work for at least 2 hours." << endl << "- Employee 0 worked for 0 hours and didn't meet the target." << endl << "- Employee 1 worked for 1 hours and didn't meet the target." << endl << "- Employee 2 worked for 2 hours and met the target." << endl << "- Employee 3 worked for 3 hours and met the target." << endl << "- Employee 4 worked for 4 hours and met the target." << endl << "There are 3 employees who met the target." << endl << endl;

    int n,target;
    int getH;
    cout << "Enter the amount of hours you are going to type in: ";
    cin >> n;
    cout << "Enter the target: ";
    cin >> target;
    vector<int>hours(50);
    for (int i = 0; i < n; i++) {
        cout << "Type the " << i + 1 << " hour: ";
        cin >> getH;
        hours[i] = getH;
    }

        int e = 0;
        for (int i = 0; i <= hours.size() - 1; i++) {
            if (hours[i] >= target) {
                e++;
            }
        }
        cout << "Answer: " << e << endl;
        return 0;
    }

