#include <bits/stdc++.h>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool isAllowed(int num) {
    int sumEven = 0, sumOdd = 0;
    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0) {
            sumEven += digit;
        } else {
            sumOdd += digit;
        }
        num /= 10;
    }
    return (sumEven % 4 == 0) || (sumOdd % 3 == 0);
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int carNum;
        cin >> carNum;
        if (isAllowed(carNum)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }
    return 0;
}
