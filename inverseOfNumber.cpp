#include<bits/stdc++.h>
using namespace std;

int findInverse(int n) {
    int inverse = 0;
    int i = 1;
    while (n != 0) {
        int rem = n % 10;
        inverse += i * pow(10, rem - 1);
        i++;
        n /= 10;
    }
    return inverse;
}

int main() {
    int n;
    cin >> n;
    int inverse = findInverse(n);
    cout << inverse << endl;
    return 0;
}
