#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int key){
    
    int start = 0;
    int end = n;
    
    while (start <= end){
        int mid = (start + end) / 2;
        if (arr[mid] == key){
            return mid;
        }   else if (arr[mid] >= key){
            end = mid - 1;
        }   else {
            start = mid +1;
        }
    }
    return -1;
}

int main(){
    cout << "Enter how many no. of input - ";
    
    int n;
    cin >> n;
    
    cout << "Enter number - " << endl;
    
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "Enter searching key - ";
    
    int key;
    cin >> key;

    cout << "Index no is - "<< binarySearch(arr, n, key) << endl;
    return 0;
}



// int binarysearch(int arr[], int n, int k) {
//         int start = 0;
//         int end = n;
        
//         while (start<=end){
//           int mid = (start+end)/2;
//         if(arr[mid]==k){
//             return mid;
//         }
//         else if (arr[mid] >= k){
//             end = mid - 1;
//         }
//         else{
//             start = mid + 1;
//         }
//     }
//         return -1;
// }

        
//     int main (){
//         int n;
//         cin >> n;
//         int arr[n];
//         for(int i=0; i<n; i++){
//             cin >> arr [i];
//         int k;
//         cin >> k;
        
//         binarysearch(arr,n,k);
//         }
//     }

