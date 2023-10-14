#include<bits/stdc++.h>
using namespace std;

int main(){
long long int n, odd_sum = 0, even_sum = 0;
cin >> n;

int position = 1; 
while(n != 0){
    int digit = n % 10;
    if(position % 2 == 0){
        even_sum += digit;
    }     
    else {
        odd_sum += digit;
    } 
    position++;
    n /= 10;
}
cout << odd_sum << endl << even_sum << endl;
return 0;
}
