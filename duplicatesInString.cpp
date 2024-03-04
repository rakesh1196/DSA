#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<char> stk;
    for (char c : s) {
        if (!stk.empty() && stk.top() == c) {
            stk.pop();
        } else {
            stk.push(c);
        }
    }

    string result;
    while (!stk.empty()) {
        result = stk.top() + result;
        stk.pop();
    }

    cout << result << endl;

    return 0;
}
