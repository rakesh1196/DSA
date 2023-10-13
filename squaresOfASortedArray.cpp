#include <bits/stdc++.h>
using namespace std;

void sortSquares(int arr[], int n){
    for (int i = 0; i < n; i++)
        arr[i] = arr[i] * arr[i];
    sort(arr, arr + n);
}

int main(){
    
    int MAX_SIZE = 10000;
    int arr[MAX_SIZE], n;
    
    cin >> n;
   
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    sortSquares(arr, n);
   
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
        
    return 0;
}
