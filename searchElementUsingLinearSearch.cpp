#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for (int i = 0; i < n; i++){
        if (arr[i] == key){
            return i;
        }
    }
    return -1;
}
   
int main(){
    
    cout << "Enter number - ";
    int n;
    cin >> n;
    
    cout << "Enter n number - " << endl;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter key - ";
    int key;
    cin >> key;
 
 cout << linearSearch(arr,n,key) << " Index no.";
    return 0;
}


