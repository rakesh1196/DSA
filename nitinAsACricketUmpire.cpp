#include <bits/stdc++.h>
using namespace std;

int uniqueNo(int n) {
    if (n == 0) {
        return 1;
    }
    int ans = 10;
    int uniqueDigits = 9;
    int availableNumber = 9;
    while (n > 1 && availableNumber > 0) {
        uniqueDigits *= availableNumber;
        ans += uniqueDigits;
        availableNumber--;
        n--;
    }
    return ans;
}

void printNo(int n) {
    vector<bool> digits(10, false);
    for (int i = 0; i < pow(10, n); i++) {
        int num = i;
        bool valid = true;
        while (num > 0) {
            int digit = num % 10;
            if (digits[digit]) {
                valid = false;
                break;
            }
            digits[digit] = true;
            num /= 10;
        }
        if (valid) {
            cout << i << endl;
        }
        fill(digits.begin(), digits.end(), false);
    }
}

int main() {
    int n;
    cin >> n;
    int count = uniqueNo(n);
    cout << count << endl;
    return 0;
}
