#include<bits/stdc++.h>
using namespace std;
int main() {
	int N;
	cin >> N;
	int check = 0;

	for (int i = 2; i <= N; i++){
		if (N % i == 0){
		check ++;
	}
}
		if (check == 1){
			cout << "Prime" << endl;
		}else{
		cout << "Not Prime" << endl;
	}
		
	return 0;
}
