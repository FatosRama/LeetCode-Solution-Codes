#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout << endl << "1920. Build Array from Permutation" << endl << "Given a zero-based permutation nums (0-indexed), build an array ans of the same length where" << endl << "ans[i] = nums[nums[i]] for each 0 <= i < nums.length and return it." << endl << endl << "A zero-based permutation nums is an array of distinct integers from 0 to nums.length - 1 (inclusive)." << endl;
    cout << "Example :" << endl << "Input: nums = [0,2,1,5,3,4]" << endl << "Output: [0,1,2,4,5,3]" << endl << "Explanation: The array ans is built as follows: " << endl << "ans = [nums[nums[0]], nums[nums[1]], nums[nums[2]], nums[nums[3]], nums[nums[4]], nums[nums[5]]]" << endl << " = [nums[0], nums[2], nums[1], nums[5], nums[3], nums[4]]" << endl << " = [0,1,2,4,5,3]" << endl << endl;

    int n;
    int num;
    cout << "Enter the amount of numbers you are going to type in: ";
    cin >> n;
    vector<int>nums(1000);
    for (int i = 0; i < n; i++) {
        cout << "Enter the " << i + 1 << " number: ";
        cin >> num;
        nums[i] = num;
    }
    int k = nums.size();
        vector<int>ans(k);
        for (int i = 0; i < k; i++) {
            ans[i] = nums[nums[i]];
        }
        
        cout << "Answer: [";
        for (int i = 0; i < n; i++) {
            if (i == n - 1) {
                cout << ans[i] << "]" << endl;
            }
            else {
                cout << ans[i] << ",";
            }
        }
        return 0;
    }
