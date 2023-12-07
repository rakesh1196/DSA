#include <bits/stdc++.h>
using namespace std;

int countDigit(int number, int digit) {
    int count = 0;
    while (number > 0) {
        int lastDigit = number % 10;
        if (lastDigit == digit) {
            count++;
        }
        number = number / 10;
    }
    return count;
}

int main() {
    int number, digit;
    cin >> number;
    cin >> digit;
    int count = countDigit(number, digit);
    cout << count;
    return 0;
}
