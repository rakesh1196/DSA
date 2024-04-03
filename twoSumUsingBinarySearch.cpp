// C++ program to check if given array
// has 2 elements whose sum is equal
// to the given value

#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int A[], int low, int high, int searchKey)
{

    while (low <= high) {
        int m = low + (high - low) / 2;

        // Check if searchKey is present at mid
        if (A[m] == searchKey)
            return true;

        // If searchKey greater, ignore left half
        if (A[m] < searchKey)
            low = m + 1;

        // If searchKey is smaller, ignore right half
        else
            high = m - 1;
    }

    // if we reach here, then element was
    // not present
    return false;
}

bool checkTwoSum(int A[], int arr_size, int sum)
{
    int l, r;

    /* Sort the elements */
    sort(A, A + arr_size);

    // Traversing all element in an array search for
    // searchKey
    for (int i = 0; i < arr_size - 1; i++) {

        int searchKey = sum - A[i];
        // calling binarySearch function
        if (binarySearch(A, i + 1, arr_size - 1, searchKey)
            == true) {
            return true;
        }
    }
    return false;
}

/* Driver program to test above function */
int main()
{
    int A[] = { 1, 4, 45, 6, 10, -8 };
    int n = 14;
    int arr_size = sizeof(A) / sizeof(A[0]);

    // Function calling
    if (checkTwoSum(A, arr_size, n))
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
