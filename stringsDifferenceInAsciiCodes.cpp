#include<bits/stdc++.h>
using namespace std;

string insertAsciiDiff(string s){
    string result="";
    for(int i=0; i<s.length()-1; i++){
        result += s[i];
        int diff = s[i+1] - s[i];
        result += to_string(diff);
    }
    result += s[s.length()-1];

    return result;
}

int main(){
    string s;
    cin >> s;

    cout << insertAsciiDiff(s);

    return 0;
}
