#include <iostream>
using namespace std;

int main()
{   
    int n;
    cin>>n;
    
    for(int row=1; row<=n; row++){
        for (int col=1; col<=row; col++){
            if(col%2==1){
               cout<<"1"; 
            }else {
                cout<<"0"; 
            }
        }
        cout<<endl;
    }
    return 0;
}
