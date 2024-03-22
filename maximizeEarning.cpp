#include <bits/stdc++.h>
using namespace std;

int earn(vector<int>& nums) {
    int n = nums.size();
    vector<int> count(10001, 0);
    for (int num : nums) {
        count[num]++;
    }

    vector<int> dp(10003, 0);
    dp[10002] = 0;
    dp[10001] = count[10001] * 10001;

    for (int i = 10000; i >= 1; i--) {
        dp[i] = max(dp[i+1], dp[i+2] + count[i] * i);
    }

    return dp[1];
}

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << earn(nums) << endl;

    return 0;
}
