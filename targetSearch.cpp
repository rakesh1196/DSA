#include<bits/stdc++.h> 
using namespace std;

int main(){

int n;
cout<<"Enter how much no. - ";
cin>>n;

int arr[n];
    cout<<"Enter no. - ";
    for (int i = 0; i <=n-1; i++) {
    cin>>arr[i];
}

    int tar;
    cout<<"Target no. - ";
    cin>>tar;

    int start = 0;
    int end = n-1;

while(start <= end) {

    int mid = start+end/2;
    if(arr[mid] == tar) {
        cout<<"Yes found";
        return 0;
}

    else if(arr[mid] < tar){
    start = mid+1;  
    }
    else {
    end= mid-1;
    }
}       cout<<"Not found";
        return 0;
}


