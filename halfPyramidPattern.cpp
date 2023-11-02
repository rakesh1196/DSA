#include<iostream>
using namespace std;
int main () {
	int N;
	cin>>N;
	
	for(int row=1; row<=N; row++){
		for(int col=1; col<=row; col++){
			cout<<col<<" ";
		}
		cout<<endl;
	}
	return 0;
}
