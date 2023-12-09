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

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        cout << countSetBits(n) << endl;
    }
    return 0;
}
