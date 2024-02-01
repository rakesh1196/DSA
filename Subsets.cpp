#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
    if (nums.empty()) {
        return {{}};
    }
    int n = nums.back();
    nums.pop_back();
    vector<vector<int>> res = subsets(nums);
    int size = res.size();
    for (int i = 0; i < size; i++) {
        res.push_back(res[i]);
        res.back().push_back(n);
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    vector<vector<int>> res = subsets(nums);
    sort(res.begin(), res.end());
    for (auto s : res) {
        for (int i = 0; i < s.size(); i++) {
            cout << s[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
