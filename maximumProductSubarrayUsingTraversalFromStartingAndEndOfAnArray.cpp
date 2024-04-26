#include <bits/stdc++.h>
using namespace std;

/* Returns the product
of max product subarray. */
long long int maxSubarrayProduct(int arr[], int n)
{
long long ans=INT_MIN;
long long product=1;
	
for(int i=0;i<n;i++){
	product*=arr[i];
	ans=max(ans,product);
	if(arr[i]==0){product=1;}
}
	
product=1;
	
for(int i=n-1;i>=0;i--){
	product*=arr[i];
	ans=max(ans,product);
	if(arr[i]==0){product=1;}
}
return ans;
}

// Driver code
int main()
{
	int arr[] = { 1, -2, -3, 0, 7, -8, -2 };
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << "Maximum Sub array product is "
		<< maxSubarrayProduct(arr, n);
	return 0;
}
