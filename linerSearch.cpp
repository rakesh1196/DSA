#include<bits/stdc++.h>
using namespace std;

void LinearSearch(int arr[], int n, int key){

    for(int i=0;i<n;i++){
        if(arr[i] == key){
            cout << key << "Found at index : " << i;
            return;
        }
    }
    cout << "Not found";
}

int main() {
    
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int key;
    cin >> key;
    LinearSearch(arr, n, key);

    return 0;
}
