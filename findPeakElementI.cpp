#include <bits/stdc++.h>
using namespace std;

int findPeakElement(int arr[], int n) {
    int left = 1, right = n - 2;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] > arr[mid - 1] && arr[mid] > arr[mid + 1]) {
            return mid;
        }
        else if (arr[mid] < arr[mid - 1]) {
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int peak = findPeakElement(arr, n);
    if (peak == -1) {
        cout << "No Peak Element" << endl;
    }
    else {
        cout << peak << endl;
    }
    return 0;
}
