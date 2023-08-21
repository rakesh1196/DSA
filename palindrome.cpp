#include <iostream>
using namespace std;
int main() {
    int input;
    cin>>input;
    int no = input;
    int copy=input;
    int reverse_no=0;
    while(input!=0){
        int rem=input%10;
        reverse_no=reverse_no*10+rem;
        input=input/10;
    }
    if(no==reverse_no){
        cout <<no<<" is a palindrome number"<<endl;
}
    else{
        cout <<no<<" is not a palindrome number"<<endl;
}
    return 0;
}




