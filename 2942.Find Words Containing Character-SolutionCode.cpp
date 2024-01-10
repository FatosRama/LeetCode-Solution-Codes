#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main() {


        cout << "2942. Find Words Containing Character" << endl << "You are given a 0-indexed array of strings words and a character x." << endl << "Return an array of indices representing the words that contain the character x." << endl << "Note that the returned array may be in any order." << endl << endl << "Example 1:" << endl <<

            "Input: words = [\"leet\", \"code\"], x = \"e\"" << endl <<
            "Output : [0, 1]" << endl <<
            "Explanation : \"e\" occurs in both words : \"leet\", and \"code\".Hence, we return indices 0 and 1." << endl << endl;
        int n;
        string Awords;
        char x;

        cout << "Enter the amount of words you're gonna type: ";
        cin >> n;

        vector<string>words;
        for (int i = 0; i < n; i++) {
            cout << "Type in your " << i + 1 << " word: ";
            cin >> Awords;
            words.push_back(Awords);

        }
        cout << "Type in the character you want to find: ";
        cin >> x;

        int count = 0;
        vector<int>ans;

        for (int i = 0; i < words.size(); ++i) {
            if (words[i].find(x) != string::npos) {
                ans.push_back(i);
            }
            else {
                count++;
                continue;
            }

        }
        cout << "Answer: [";
        if (count == words.size()) {
            cout << "" << "]" << endl;
        }
        else {
            for (int i = 0; i < ans.size(); i++) {
                if (i == ans.size() - 1) {
                    cout << ans[i] << "]" << endl;
                }
                else {
                    cout << ans[i] << ",";
                }

            }
        }

        return 0;
    }
    