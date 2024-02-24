#include<bits/stdc++.h>
using namespace std;

int main(){
    int n1,n2;
    cin>>n1;
    vector<int> arr1(n1);
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    } 

    cin>>n2;
    vector<int> arr2(n2);
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    } 

    unordered_map<int,int> nextGreater;
    stack<int> s;

    for(int i=0;i<n2;i++){
        while(!s.empty() && s.top()<arr2[i]){
            nextGreater[s.top()] = arr2[i];
            s.pop();
        }
        s.push(arr2[i]);
    }

    vector<int> ans(n1);
    for(int i=0;i<n1;i++){
        if(nextGreater.count(arr1[i])>0){
            ans[i] = nextGreater[arr1[i]];
        }
        else{
            ans[i] = -1;
        }
    }

    for(int i=0;i<n1;i++){
        cout<<ans[i]<<" ";
    } 
    cout<<endl;
    return 0;
}
