#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> pushed;
    stack<int> stk;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        pushed.push(num);
    }

    queue<int> popped;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        popped.push(num);
    }

    while (!pushed.empty()) {
        int num = pushed.front();
        pushed.pop();
        stk.push(num);

        while (!stk.empty() && stk.top() == popped.front()) {
            stk.pop();
            popped.pop();
        }
    }

    if (popped.empty()) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
