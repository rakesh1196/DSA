#include <bits/stdc++.h>
using namespace std;

string insertStars(string str, int i) {
    if (i == str.length() - 1) {  
        return str;
    }
    if (str[i] == str[i+1]) {  
        str.insert(i+1, "*"); 
        return insertStars(str, i+2);   
    }
    else {
        return insertStars(str, i+1);  
    }
}

int main() {
    string str;
    cin >> str;
    cout << insertStars(str, 0) << endl;
    return 0;
}
