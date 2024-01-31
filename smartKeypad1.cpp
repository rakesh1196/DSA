#include <bits/stdc++.h>
using namespace std;

string table[] = {" ", ".+@$", "abc", "def", "ghi", "jkl" , "mno", "pqrs" , "tuv", "wxyz"};

void generating(string digits, string output) {
    if (digits.size() == 0) { 
        cout << output << endl;
        return;
    }
    int digit = digits[0] - '0';
    string letters = table[digit];
    for (int i = 0; i < letters.size(); i++) {
        generating(digits.substr(1), output + letters[i]);
    }
}

int main() {
    string digits;
    cin >> digits;
    generating(digits, "");
    return 0;
}
