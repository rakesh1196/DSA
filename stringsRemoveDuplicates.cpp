#include <bits/stdc++.h>
using namespace std;

string duplicatesRemove(string s){

	int n = s.length();
	string str = "";
	
	if (n == 0){
	    return str;
	}
		
		for (int i = 0; i < n - 1; i++) {
		if (s[i] != s[i + 1]) {
			str = str + s[i];
		}
	}
	str.push_back(s[n - 1]);
	return str;
}

int main(){

	string s;
	cin >> s;
	duplicatesRemove (s);
    cout << duplicatesRemove(s);
	return 0;
}
