#include<bits/stdc++.h>
using namespace std;
 
vector<int> ans;
 
void func(int no, int curr_no){
    if (curr_no > no){
        return;
    }
 
    int i;
    if (curr_no > 0){
        i = 0;
    }
    else {
        i = 1;
    }
 
    for (  ; i <= 9 ; i++){
        int val = curr_no * 10 + i;
        if (val <= no){
            ans.push_back(val);
            func(no , val);
        }
    }
}
 
int main(){
 
    int no;
    cin >> no;
    ans.push_back(0);
    func(no , 0);
    for (int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << " ";
    }
    return 0;
}
 
