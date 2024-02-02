#include <bits/stdc++.h>
using namespace std;

bool isBeautiful(string s) {
    int n = s.length();
    int l = 0, r = n - 1;
    bool deleted = false;
    while (l < r) {
        if (s[l] != s[r]) {
            if (deleted) {
                return false;
            }
            deleted = true;
            if (s[l+1] == s[r]) {
                l++;
            } else if (s[l] == s[r-1]) {
                r--;
            } else {
                return false;
            }
        }
        l++;
        r--;
    }
    return true;
}

int main() {
    string s;
    cin >> s;
    if (isBeautiful(s)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }
    return 0;
}
