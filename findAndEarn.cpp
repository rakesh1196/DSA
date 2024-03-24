#include <iostream>
#include <vector>
using namespace std;

int findNumberOfLIS(vector<int>& nums) {
    int n = nums.size(), maxLength = 0, numberOfLIS = 0;
    vector<int> lengths(n, 1), counts(n, 1);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (nums[i] > nums[j]) {
                if (lengths[j] + 1 > lengths[i]) {
                    lengths[i] = lengths[j] + 1;
                    counts[i] = counts[j];
                } else if (lengths[j] + 1 == lengths[i]) {
                    counts[i] += counts[j];
                }
            }
        }
        maxLength = max(maxLength, lengths[i]);
    }

    for (int i = 0; i < n; ++i) {
        if (lengths[i] == maxLength) {
            numberOfLIS += counts[i];
        }
    }

    return numberOfLIS;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    cout << findNumberOfLIS(nums) << endl;
    return 0;
}
