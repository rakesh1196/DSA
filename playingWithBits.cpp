#include <bits/stdc++.h>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while(n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

void solve() {
    int Q, a, b;
    cin >> Q;
    while(Q--) {
        cin >> a >> b;
        int ans = 0;
        for(int i=a; i<=b; i++) {
            ans += countSetBits(i);
        }
        cout << ans << endl;
    }
}

// Main function
int main() {
    solve();
    return 0;
}
