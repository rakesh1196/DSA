#include <iostream>

using namespace std;

int main()
{   
    int no;
    cout<< "Enter number :- ";
    cin>> no;
    int count = 0;
    while(no>0){
      count = count + 1;
      no = no/10;  
    }
    cout<< "Number of digits :- " << count <<endl;
    return 0;
}
