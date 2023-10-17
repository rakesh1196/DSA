#include<iostream>
using namespace std;
int main() {
     int N1,N2,lcm;
		cin>>N1;
		cin>>N2;

      for(int i = 1; i <= N1 || i <= N2; i++) {
        if(N1%i == 0 && N2%i == 0 ){
			lcm = i;
		}   
    }
    lcm = (N1*N2)/lcm;
    cout<<lcm;
    return 0;
}
