class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        int ans[n]= {0};
        vector<int>answer;
        
        for(int i=0; i<n; i++){
            ans[arr[i]]++;
        } 
        for(int i=0; i<n; i++){
            if(ans[i]>1){
                answer.push_back(i);
            }
        }
        if(answer.size()!=0){
            return answer;
        }else{
            return {-1};
        }
    }
};
