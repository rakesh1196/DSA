#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr, int low, int high)
{
    if (arr[low] < arr[high]) {
        return arr[low];
    }
    int ans = 1e9;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] == arr[low]
            and arr[mid] == arr[high]) {
            ans = min(ans,arr[mid]);
            low++;
            high--;
        }
        else if (arr[mid] > arr[high]) {
            low = mid + 1;
        }

        else {
            ans = min(ans,arr[mid]);
            high = mid - 1;
        }
    }

    return ans;
}

int main()
{
    vector<int> arr = {5, 6, 1, 2, 3, 4};
    int N = arr.size();
    cout << "The minimum element is "
         << findMin(arr, 0, N - 1) << endl;
    return 0;
}
