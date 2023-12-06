#include <bits/stdc++.h>
using namespace std;

void solve() {
    int N;
    cin >> N;
    int A[N];
    for(int i=0; i<N; i++) {
        cin >> A[i];
    }
    sort(A, A+N);
    int ans = 0;
    for(int i=0; i<N; i+=2) {
        ans += A[i];
    }
    cout << ans << endl;
}

int main() {
    solve();
    return 0;
}
