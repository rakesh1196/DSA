#include <bits/stdc++.h>
using namespace std;

string isPalindrome (string Str){
    for (int i = 0; i < Str.length() / 2; i++){
      if (Str[i] != Str[Str.length() - i - 1]){
           return "false";
        }
    }
    return "true";
}
int main(){

    string S;
	cin >> S;
    cout << isPalindrome(S);
    return 0;
}
