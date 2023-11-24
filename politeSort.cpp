#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int left = -1, right = -1;
    for(int i = 0; i < n - 1; i++) {
        if(a[i] > a[i + 1]) {
            left = i;
            break;
        }
    }
    for(int i = n - 1; i > 0; i--) {
        if(a[i] < a[i - 1]) {
            right = i;
            break;
        }
    }
    if(left == -1 || right == -1) {
        cout << 0 << endl;
        return 0;
    }
    int mn = a[left], mx = a[left];
    for(int i = left + 1; i <= right; i++) {
        mn = min(mn, a[i]);
        mx = max(mx, a[i]);
    }
    for(int i = 0; i < left; i++) {
        if(a[i] > mn) {
            left = i;
            break;
        }
    }
    for(int i = n - 1; i > right; i--) {
        if(a[i] < mx) {
            right = i;
            break;
        }
    }
    cout << right - left + 1 << endl;
    return 0;
}
