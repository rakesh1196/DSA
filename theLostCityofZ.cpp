#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;

    int sum = 0;
    for (int i = 0; i < m; i++) {
        sum += a[i];
    }
    int max_sum = sum;
    for (int i = m; i < n; i++) {
        sum += a[i] - a[i-m];
        max_sum = max(max_sum, sum);
    }

    double max_avg = (double) max_sum / m;
    cout << max_avg << endl;

    return 0;
}
