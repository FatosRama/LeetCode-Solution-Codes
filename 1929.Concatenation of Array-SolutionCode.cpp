#include <iostream>
#include<vector>
using namespace std;

int main(){
    cout << "1929. Concatenation of Array" << endl << endl << "Given an integer array nums of length n, you want to create an array ans of length 2n where" << endl << " ans[i] == nums[i] and ans[i + n] == nums[i] for 0 <= i < n(0 - indexed)." << endl << "Specifically, ans is the concatenation of two nums arrays." << endl << "Return the array ans." << endl;
    cout << endl << "Example :" << endl;
    cout << "Input: nums = [1,2,1]" << endl << "Output: [1,2,1,1,2,1]" << endl << "Explanation: The array ans is formed as follows:" << endl << "- ans = [nums[0],nums[1],nums[2],nums[0],nums[1],nums[2]]" << endl << "- ans = [1,2,1,1,2,1]" << endl << endl;
    
    int n, num;
    
    cout << "Enter the amount of numbers you're going to type in: ";
    cin >> n;
    vector<int>nums(n);
    for (int i = 0; i < n; i++) {
        cout << "Type the " << i + 1 << " number: ";
        cin >> num;
        nums[i] = num;

    }
    
        vector<int>ans(2 * n);
        for (int i = 0; i < n; i++) {
            ans[i] = ans[i + n] = nums[i];
        }
        cout << "Answer = [";
        for (int i = 0; i < 2 * n; i++) {
            if (i == 2 * n - 1) {
                cout << ans[i] << "]" << endl;
            }
            else {
                cout << ans[i] << ",";
            }
        }
        
return 0;
}

