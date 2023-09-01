#include <iostream>
using namespace std;
int main(){
    
    int arr[3];
	int max = 0, secondMax=0;

	for(int i = 0; i <= 2; i++){
   
	cin >> arr[i];
		if(max<arr[i]){
		secondMax = max;
		max = arr[i];
		}
	}
		cout << max;
    return 0;
}
