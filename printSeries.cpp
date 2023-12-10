#include<bits/stdc++.h>
using namespace std;
int main() {

    int N1,N2,a=0;

	cin>>N1;
	cin>>N2;

	for(int i=1;i<=N1;i++){
		for(int j=(a+i);j<=1001;j++){
            int b = (3*j)+2;
            if(b % N2 != 0){
               cout << b <<endl;
               break;
            }else{
				a++;
			}
        }
	}
	return 0;
}
