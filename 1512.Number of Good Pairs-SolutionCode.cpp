#include <iostream>
#include<vector>

using namespace std;


int main(){
    cout << endl << "1512. Number of Good Pairs" << endl <<endl<< "Given an array of integers nums, return the number of good pairs." << endl << "A pair (i, j) is called good if nums[i] == nums[j] and i < j." << endl << endl << "Example :" << endl << "Input: nums = [1,2,3,1,1,3]" << endl << "Output: 4" << endl << "Explanation: There are 4 good pairs (0,3), (0,4), (3,4), (2,5) 0-indexed." << endl << endl;
    
    
    
    
    
    int n;
    int num;
    cout << "Enter the amount of numbers you are going to type in: ";
    cin >> n;
    vector<int>nums(100);
        for (int i = 0; i < n; i++) {
            cout << "Type the " << i + 1 << " number: ";
            cin >> num;
            nums[i] = num;
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (nums[i] == nums[j]) {
                    if (i < j) {
                        ans++;
                    }
                }
            }
        }
        cout << "The number of good pairs are: " << ans << endl;
        return 0;
    }
