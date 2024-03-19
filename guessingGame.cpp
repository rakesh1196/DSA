#include <bits/stdc++.h>
using namespace std;

int getMoneyAmount(int n) {
    vector<vector<int>> dp(n+1, vector<int>(n+1, INT_MAX));
        for (int i = 1; i <= n; i++) {
        dp[i][i] = 0;
    }

    for (int i = n; i >= 1; i--) {
        for (int j = i+1; j <= n; j++) {
            for (int k = i; k <= j; k++) {
                if (k == i) {
                    dp[i][j] = min(dp[i][j], k + dp[i+1][j]);
                } else if (k == j) {
                    dp[i][j] = min(dp[i][j], k + dp[i][j-1]);
                } else {
                    dp[i][j] = min(dp[i][j], k + max(dp[i][k-1], dp[k+1][j]));
                }
            }
        }
    }
    return dp[1][n];
}

int main() {
    int n;
    cin >> n;
    cout << getMoneyAmount(n) << endl;
    return 0;
}
