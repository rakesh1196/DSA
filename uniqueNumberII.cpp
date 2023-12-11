#include <bits/stdc++.h>
using namespace std;

void findUniqueNumbers(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        if (count == 1) {
            res.push_back(nums[i]);
        }
    }
    
    if (res[0] < res[1]) {
        cout << res[0] << " " << res[1] << endl;
    } else {
		cout << res[1] << " " << res[0] << endl;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    findUniqueNumbers(nums);
    
    return 0;
}
