#include <bits/stdc++.h>
using namespace std;

void findTriplets(int arr[], int n, int target) {
    sort(arr, arr+n); 

    for (int i = 0; i < n-2; i++) {
        if (i > 0 && arr[i] == arr[i-1]) { 
            continue;
        }

        int left = i+1, right = n-1;

        while (left < right) {
            int sum = arr[i] + arr[left] + arr[right];

            if (sum == target) {
                cout << arr[i] << ", " << arr[left] << " and " << arr[right] << endl;
                left++;
                right--;

                while (left < right && arr[left] == arr[left-1]) { 
                    left++;
                }
                while (left < right && arr[right] == arr[right+1]) { 
                    right--;
                }
            }
            else if (sum < target) {
                left++;
            }
            else {
                right--;
            }
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

    findTriplets(arr, n, target);

    return 0;
}
