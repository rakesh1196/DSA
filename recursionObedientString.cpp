#include <bits/stdc++.h>
using namespace std;

bool obedient(string x,int i){

	if(i>=x.length())
		return true;

	if(x[i]!='a' && x[i]!='b'){
		return false;
	}
		
	if(x[i]=='b'){
		if((i< x.length()-1) && x[i+1]=='b'){
			return obedient(x,i+2);
		}else {
			return false;
		}
	}
	return obedient(x,i+1);
}

int main(){
	string x;
	cin>>x;

	if(obedient(x,0)){
		cout<<"true";
	}else{
		cout<<"false";
	}

	return 0;
}
