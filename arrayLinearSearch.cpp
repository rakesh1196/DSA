#include <bits/stdc++.h>
using namespace std;

int linearSearch (int arr[], int N, int key){
    for(int i=0; i<N; i++){
        if(arr[i]==key){
            return i;
        }
    }
    return -1;
}

int main (){
    int N;
    cin >> N;
    
    int arr[N];

    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    
    cout << "Index no is = " << linearSearch(arr, N, key);
    return 0;
}
