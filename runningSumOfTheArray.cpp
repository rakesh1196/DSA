#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int sum[n];
    sum[0] = nums[0];
    for (int i = 1; i < n; i++) {
        sum[i] = sum[i-1] + nums[i];
    }

    for (int i = 0; i < n; i++) {
        cout << sum[i] << " ";
    }
    cout << endl;

    return 0;
}
