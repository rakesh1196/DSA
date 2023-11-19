#include <bits/stdc++.h>
using namespace std;

void removeDuplicates(int arr[], int& n) {
    if (n <= 2){
        return;  
    } 
    int j = 2;  
    for (int i = 2; i < n; i++) {
        if (arr[i] != arr[j-2]) {
            arr[j] = arr[i];  
            j++;
        }
    }
    n = j; 
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    removeDuplicates(arr, n);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
