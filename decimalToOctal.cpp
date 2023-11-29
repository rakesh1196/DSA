#include <bits/stdc++.h>
using namespace std;

int decimalToOctal(int n) {
    int octal = 0, place = 1;

    while (n > 0) {
        octal += (n % 8) * place;
        n = n/8;
        place *= 10;
    }

    return octal;
}

int main() {
    int n;
    cin >> n;

    int octal = decimalToOctal(n);

    cout << octal << endl;

    return 0;
}
