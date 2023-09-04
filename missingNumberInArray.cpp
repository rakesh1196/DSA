// User function template for C++

class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        int sum = 0;
        int missing = n * (n + 1) / 2;
        
        for (int i = 0; i < n-1; i++){
            sum = sum + array[i];
        }
        return missing - sum;
    }
};
