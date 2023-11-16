#include<bits/stdc++.h>
using namespace std;
#define int long long
int a[100005],cnt[10005];

signed main(){
    int n,k; 
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
        
    cnt[0]=1;
    int sum=0,ans=0;
    for(int i=1;i<=n;i++){
        sum=(sum+a[i]%k+k)%k;
        ans+=cnt[sum];
        cnt[sum]++;
    }
    cout<<ans;
    return 0;
}
