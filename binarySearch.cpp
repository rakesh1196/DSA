// User function template for C++

class Solution {
  public:
  
    int binarysearch(int arr[], int n, int k){
       int start = 0;
       int end = n;
       
       while(start <= end){
           int mid = (start+end)/2;
           if (arr[mid] == k){
               return mid;
           }
           else if (arr[mid] >= k){
               end = mid - 1;
           }
           else{
               start = mid + 1;
           }
       }
       return -1;
    }
    int main(){
        int n;
        cin >> n;
        int arr[n];
        for (int i=0; i<=n; i++){
            cin >> arr[n];
        }
        int k;
        cin >> k;
        binarysearch(arr,n,k);
        return 0;
    }
    
    
    
};
