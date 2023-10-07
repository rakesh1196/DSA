#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int target) {
int low = 0, high = n-1;


while(low<=high) {
    int mid = (low+high)/2;

    if(arr[mid]==target) {
        return mid;
    }
    else if(arr[mid]<target) {
        low = mid+1;
    }
    else {
        high = mid-1;
    }
}
return -1;
}

int main() {
int n;
cin>>n;


int arr[n];
for(int i=0;i<n;i++) {
    cin>>arr[i];
}

int target;
cin>>target;

int index = binarySearch(arr, n, target);

cout<<index<<endl;

return 0;
}
