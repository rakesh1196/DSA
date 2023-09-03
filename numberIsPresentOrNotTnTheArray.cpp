#include<bits/stdc++.h>
using namespace std;
int main(){

int n, i;
    cout<<"Enter number :- ";
    cin>>n;

int arr[n];
    cout<<"Enter all number :- ";
    for(int i=0;i<=n-1;i++){
    cin>>arr[i];
  
}

int key;
    cout<<"Enter Target No.:- ";
    cin>>key;

    for(int i=0;i<=n-1;i++){
    if(key==arr[i]){
        cout<<"The number is present in the index "<<i<<endl;
    }
    else{
        cout<<key<<" is not present in the index "<<endl;
        break;
    }
}
return 0;
}
