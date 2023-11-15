#include <bits/stdc++.h>
using namespace std;

int count_combinations(int n, int target, int coins[]) {
    if (target == 0) return 1; 
    if (n == 0) return 0; 
    int count = 0;
    for (int i = 0; i * coins[0] <= target; i++) {
        count += count_combinations(n-1, target-i*coins[0], coins+1);
    }
    return count;
}

int main() {
    int n, target;
    cin >> n >> target;
    int coins[n];
    for (int i = 0; i < n; i++) {
        cin >> coins[i];
    }
    int result = count_combinations(n, target, coins);
    cout << result << endl;
    return 0;
}
