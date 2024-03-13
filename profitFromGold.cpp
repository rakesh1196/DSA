#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> prices(n);
    for (int i = 0; i < n; i++) {
        cin >> prices[i];
    }

    int max_profit = 0;
    int min_price = prices[0];
    for (int i = 1; i < n; i++) {
        max_profit = max(max_profit, prices[i] - min_price);
        min_price = min(min_price, prices[i]);
    }

    cout << max_profit << endl;

    return 0;
}
