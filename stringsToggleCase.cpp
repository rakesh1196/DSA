#include <bits/stdc++.h>
using namespace std;

string toggleCase(string s) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') {
            s[i] = toupper(s[i]);
        } else if (s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = tolower(s[i]);
        }
    }
    return s;
}

int main() {
    string s;
    cin >> s;
    cout << toggleCase(s) << endl;
    return 0;
}
