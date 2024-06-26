#include <bits/stdc++.h>
using namespace std;

int maxSubarrayProduct(int arr[], int n)
{
	int result = arr[0];

	for (int i = 0; i < n; i++) {
		int mul = arr[i];
		// traversing in current subarray
		for (int j = i + 1; j < n; j++) {
			// updating result every time
			// to keep an eye over the maximum product
			result = max(result, mul);
			mul *= arr[j];
		}
		// updating the result for (n-1)th index.
		result = max(result, mul);
	}
	return result;
}

int main()
{
	int arr[] = { 1, -2, -3, 0, 7, -8, -2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Maximum Sub array product is "
		<< maxSubarrayProduct(arr, n);
	return 0;
}

// This code is contributed by Aditya Kumar (adityakumar129)
