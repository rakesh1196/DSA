#include<iostream>
#include<string>
using namespace std;

string replaceCharacters(string s){
    for(int i=0; i<s.length(); i++){
        if(i%2==0){
			s[i] = s[i]+1;
		} 
        else{
			s[i] = s[i]-1;
		}  
    }
    return s;
}

int main(){
    string s;
    cin >> s;

    cout << replaceCharacters(s);

    return 0;
}
