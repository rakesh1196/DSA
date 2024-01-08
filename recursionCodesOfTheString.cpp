#include<bits/stdc++.h>
using namespace std;
vector<string> Total;
 
void Decode(string s , int index , string Enc, string ans){
 
    if (index >= s.size()){
        Total.push_back(ans);
        return;
    }
 
 
    if (s[index] == '0'){
        return;
    }
 
    int val = s[index]-'0'; 
 
    ans += Enc[val];
 
    Decode(s , index+1 , Enc , ans);
 
    ans.pop_back(); 
 
    if (index < s.size()-1){
        int val2 = (s[index]-'0')*10 + (s[index+1]-'0');
        if (val2 >= 10 and val2 <= 26){
            ans += Enc[val2];
            Decode(s , index+2 , Enc , ans);
            ans.pop_back();  
        }
    }
}
 
 
int main() {
 
    int n;
    cin >> n;
 
    string Enc = "#abcdefghijklmnopqrstuvwxyz";
 
    string ans = "";
   string s = to_string(n);
 
   Decode(s , 0 , Enc , ans);
 
   cout << "[";
   for (int i = 0 ; i < Total.size() ; i++){
       cout << Total[i];
       if (i != Total.size()-1){
           cout << "," << " ";
       }
   }
   cout << "]";
   return 0;
}
