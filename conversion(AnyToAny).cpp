#include <bits/stdc++.h>
using namespace std;

int convertToDecimal(string sn, int sb) {
    int decimal = 0;
    int power = 1;
    for(int i=sn.length()-1; i>=0; i--) {
        int digit;
        if(sn[i] >= '0' && sn[i] <= '9') {
            digit = sn[i] - '0';
        } else {
            digit = sn[i] - 'A' + 10;
        }
        decimal += digit * power;
        power *= sb;
    }
    return decimal;
}

string convertToBase(int decimal, int db) {
    string result = "";
    while(decimal > 0) {
        int digit = decimal % db;
        char digitChar;
        if(digit >= 0 && digit <= 9) {
            digitChar = digit + '0';
        } else {
            digitChar = digit - 10 + 'A';
        }
        result = digitChar + result;
        decimal /= db;
    }
    return result;
}

int main() {
    int sb, db;
    string sn;
    cin >> sb >> db >> sn;
    int decimal = convertToDecimal(sn, sb);
    string result = convertToBase(decimal, db);
    cout << result << endl;
    return 0;
}
