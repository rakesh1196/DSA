#include <bits/stdc++.h>
using namespace std;

bool compare(string s, string t) {
    stack<char> stack_s, stack_t;

       for (char c : s) {
        if (c == '#') {
            if (!stack_s.empty()) {
                stack_s.pop();
            }
        } else {
            stack_s.push(c);
        }
    }

    for (char c : t) {
        if (c == '#') {
            if (!stack_t.empty()) {
                stack_t.pop();
            }
        } else {
            stack_t.push(c);
        }
    }

    if (stack_s.size() != stack_t.size()) {
        return false;
    }
    while (!stack_s.empty()) {
        if (stack_s.top() != stack_t.top()) {
            return false;
        }
        stack_s.pop();
        stack_t.pop();
    }
    return true;
}

int main() {
    string s, t;
    cin >> s >> t;

    if (compare(s, t)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
