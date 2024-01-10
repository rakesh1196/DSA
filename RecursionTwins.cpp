#include<bits/stdc++.h>
using namespace std;
 
int func(string &s , int index){
  
   if (index >= s.size()){
       return 0;
   }
 
   if (index+2 < s.size() and s[index] == s[index+2]){
       return  1 + func(s , index+1); 
   }
 
   return 0 + func(s , index+1);
}
 
int main() {
 
    string s;
    cin >> s;
 
    cout << func(s , 0) << endl;
 
    return 0;
}
