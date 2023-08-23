#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, rem, sum;
	cout << "Is Armstrong Number - "
	cin >> n;
	int temp = n;
	
	while(n!=0){
		rem = n % 10;
		sum = sum + (rem*rem*rem);
		n = n / 10;
	}
		
	if (sum==temp){
		cout << "true" << endl;
	}	else{
		cout << "false" << endl;
	}
	return 0;
}

