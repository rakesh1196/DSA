#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
    if (n <= 1) {
        return true;
    }
    
    if (arr[0] > arr[1]) {
        return false;
    }
    
    return isSorted(arr + 1, n - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool sorted = isSorted(arr, n);
    if (sorted) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}
