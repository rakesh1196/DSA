#include <bits/stdc++.h>
using namespace std;

int findMinimum(int arr[], int n) {
    int start = 0, end = n-1, mid;
    while (start <= end) {
        if (arr[start] <= arr[end]) {
            return arr[start];
        }
        mid = start + (end-start)/2;
        int next = (mid+1)%n;
        int prev = (mid+n-1)%n;
        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev]) {
            return arr[mid];
        } else if (arr[mid] >= arr[start]) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return arr[0];
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << findMinimum(arr, n) << endl;
    return 0;
}
