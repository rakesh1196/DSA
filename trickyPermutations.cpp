#include <bits/stdc++.h>
using namespace std;

void distinctPermutations(string str, int l, int r) {
    static int count = 0;
    static string perm[100000];
    if(l == r) {
        perm[count++] = str;
    } else {
        for(int i = l; i <= r; i++) {
            if(i != l && str[l] == str[i]) {
                continue;
            } 
            swap(str[l], str[i]);
            distinctPermutations(str, l+1, r);
        }
    }
    if(l == 0) {
        sort(perm, perm+count);
        for(int i = 0; i < count; i++) {
            cout << perm[i] << endl;
        }
        count = 0;
    }
}

int main() {
    string str;
    cin >> str;
    int n = str.size();
    sort(str.begin(), str.end());
    distinctPermutations(str, 0, n-1);
    return 0;
}
