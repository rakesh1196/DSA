#include <bits/stdc++.h>
using namespace std;

string keypad[] = {" ", ".+@$", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
string searchIn[] = {
            "kartik", "sneha", "deepak", "arnav", "shikha", "palak",
            "utkarsh", "divyam", "vidhi", "sparsh", "akku"
    };

void findMatchingStrings(string numStr, string prefix, int index) {
    if(index == numStr.length()) {
        for(int k=0; k<11; k++) {
            if(searchIn[k].find(prefix) != string::npos) {
                cout << searchIn[k] << endl;
            }
        }
        return;
    }
    int digit = numStr[index] - '0';
    int keyLen = keypad[digit].length();
    for(int j=0; j<keyLen; j++) {
        string newPrefix = prefix + keypad[digit][j];
        findMatchingStrings(numStr, newPrefix, index+1);
    }
}

int main() {
    string numStr;
    cin >> numStr;
    findMatchingStrings(numStr, "", 0);
    return 0;
}
