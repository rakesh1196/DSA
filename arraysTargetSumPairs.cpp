#include <bits/stdc++.h>
using namespace std;

void findPairs(int arr[], int n, int target) {
    sort(arr, arr+n); 

    int left = 0, right = n-1;

    while (left < right) {
        if (arr[left] + arr[right] == target) {
            cout << arr[left] << " and " << arr[right] << endl;
            left++;
            right--;
        }
        else if (arr[left] + arr[right] < target) {
            left++;
        }
        else {
            right--;
        }
    }
}

int main() {
    int n, target;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> target;

    findPairs(arr, n, target);

    return 0;
}
