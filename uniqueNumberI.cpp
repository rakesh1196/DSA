#include <bits/stdc++.h>
using namespace std;

int findUnique(int arr[], int n) {
    int unique = arr[0];
    for (int i = 1; i < n; i++) {
        unique ^= arr[i];  
    }
    return unique;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int unique = findUnique(arr, n);

    cout << unique << endl;

    return 0;
}
