#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    stack<int> st;
    vector<int> res(n, -1);
    for (int i = 0; i < n * 2; i++) {
        int num = nums[i % n];
        while (!st.empty() && nums[st.top()] < num) {
            res[st.top()] = num;
            st.pop();
        }
        if (i < n) {
            st.push(i);
        }
    }
    for (int i = 0; i < n; i++) {
        cout << res[i] << " ";
    }
    return 0;
}

