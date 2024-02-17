#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        stack<int> scores;
        int sum = 0;
        for (int i = 0; i < n; i++) {
            string op;
            cin >> op;
            if (op == "C") {
                int prev = scores.top();
                scores.pop();
                sum -= prev;
            } else if (op == "D") {
                int prev = scores.top();
                scores.push(2 * prev);
                sum += 2 * prev;
            } else if (op == "+") {
                int prev1 = scores.top();
                scores.pop();
                int prev2 = scores.top();
                scores.push(prev1);
                scores.push(prev1 + prev2);
                sum += prev1 + prev2;
            } else {
                int score = stoi(op);
                scores.push(score);
                sum += score;
            }
        }
        cout << sum << endl;
    }
    return 0;
}
