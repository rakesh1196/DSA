#include<bits/stdc++.h>
using namespace std;

int main(){

int N;
cin>>N;

//First line

    //space
    for(int space=1;space<=N-1;space++){
		cout<<" ";
	}
    //star
    for(int star=1;star<=N;star++){
		cout<<"*";
	} 
    cout<<endl;

//middle line 
    for(int row=2;row<=N-1;row++){
    //space
    for(int space=1;space<=N-row;space++){
		cout<<" ";
	}
    //star
    	cout<<"*";
    for(int star=1;star<=N-2;star++){
		cout<<" ";
	}
    //star
		cout<<"*";
		cout<<endl;
}  
//last line
    for(int row=1;row<=N;row++){
		cout<<"*";
	}

return 0;
}
