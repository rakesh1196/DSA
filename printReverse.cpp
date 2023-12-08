#include <iostream>
using namespace std;
int main() {

    int input;	
    cin>>input;

	int rev=0;

    while(input!=0){
        int rem=input%10;   // remainder
        rev=rev*10+rem;		// reverse no
        input=input/10;		// quotient
    }
    cout<<rev;				// output
    return 0;
}




