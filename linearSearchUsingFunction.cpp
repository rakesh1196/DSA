#include <bits/stdc++.h>
using namespace std;

bool Linearsearch(int arr[], int target, int no_of_elements){
    for(int i=0; i<=no_of_elements; i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
    
int main()
{   
    int no_of_elements;
    cin>>no_of_elements;
    
    int arr[no_of_elements];
    
    for (int i=0; i<=no_of_elements; i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    bool ans =  Linearsearch (arr, target, no_of_elements);
    
    if (ans == true)
        cout<<"Yes";
    else
        cout<<"No";
    

    return 0;
}
