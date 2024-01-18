#include <iostream>
using namespace std;
int addDigits(int num){
    int sum=0;
        while(num){
            sum = sum + (num % 10);
            num = num / 10;
        }
        if(sum < 10){
            return sum;
        } else {
            return addDigits(sum);
        }
            
}
int main() {
    int num;
    cin >> num;
    cout << addDigits (num);
}
