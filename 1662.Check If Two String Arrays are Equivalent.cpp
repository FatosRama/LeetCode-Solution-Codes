#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
    cout << endl << "1662. Check If Two String Arrays are Equivalent" << endl << endl << "Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise." << endl << "A string is represented by an array if the array elements concatenated in order forms the string." << endl << endl << "Example :" << endl << "Input: word1 = [\"ab\", \"c\"], word2 = [\"a\", \"bc\"]" << endl << "Output: true" << endl << "Explanation:" << endl << "word1 represents string \"ab\" + \"c\" -> \"abc\"" << endl << "word2 represents string \"a\" + \"bc\" -> \"abc\"" << endl << "The strings are the same, so return true." << endl << endl;

    int n1, n2;
    string w1, w2;
    cout << "Enter the amount of words you are going to type in the first word list: ";
    cin >> n1;
    cout << "Enter the amount of words you are going to type in the second word list: ";
    cin >> n2;
    vector<string>word1(n1);
    vector<string>word2(n2);
    for (int i = 0; i < n1; i++) {
        cout << "Type the " << i + 1 << " word in the first word list: ";
        cin >> w1;
        word1[i] = w1;
     
    }
    for (int i = 0; i < n2; i++) {
        cout << "Type the " << i + 1 << " word in the second word list: ";
        cin >> w2;
        word2[i] = w2;
    }


    int i = 0, j = 0, a = 0, b = 0;
    while (i < word1.size() && j < word2.size()) {
        if (word1[i][a] != word2[j][b]) {
            cout << "false";
        }
        if (++a == word1[i].size()) {
            ++i;
            a = 0;
        }
        if (++b == word2[j].size()) {
            ++j;
            b = 0;
        }
    }

    bool check= ( i == word1.size() && j == word2.size());
    if (check == true) {
        cout << "true" << endl;
    }
    





    return 0;
}

