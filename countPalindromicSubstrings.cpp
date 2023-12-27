#include <bits/stdc++.h>
using namespace std;

int countPalindromes(string str) {
    int count = 0;
    int n = str.size();

    for (int i = 0; i < n; i++) {
        int l = i, r = i;
        while (l >= 0 && r < n && str[l] == str[r]) {
            count++;
            l--;
            r++;
        }
    }

    for (int i = 0; i < n - 1; i++) {
        int l = i, r = i + 1;
        while (l >= 0 && r < n && str[l] == str[r]) {
            count++;
            l--;
            r++;
        }
    }

    return count;
}

int main() {
    string str;
    cin >> str;

    int count = countPalindromes(str);

    cout << count << endl;

    return 0;
}
