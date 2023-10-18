#include<iostream>
using namespace std;
int main() {

	int N1, N2;
	cin >> N1 >> N2;
	int max = 0;
	for (int i = 1; i <= N1 && i <= N2; i++){
		if(N1 % i == 0 && N2 % i == 0){
			max = i;
		}	
	}
	cout << max;
	return 0;
}
