#include <bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    stack<char> str;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            str.push(c);
        } else if (c == ')' && !str.empty() && str.top() == '(') {
            str.pop();
        } else if (c == '}' && !str.empty() && str.top() == '{') {
            str.pop();
        } else if (c == ']' && !str.empty() && str.top() == '[') {
            str.pop();
        } else {
            return false;
        }
    }
    return str.empty();
}

int main() {
    string s;
    cin >> s;
    if (isValid(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
