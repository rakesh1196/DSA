#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    stack<int> stk;
    stk.push(0); 

    int score = 0;
    for (char c : s) {
        if (c == '(') {
            stk.push(0); 
        } else {
            int prev = stk.top();
            stk.pop();
            int cur = stk.top();
            stk.pop();

            cur += max(prev * 2, 1); 
            stk.push(cur); 
        }
    }

    score = stk.top(); 
    cout << score << endl;

    return 0;
}
