#include<bits/stdc++.h>
using namespace std;
int main () {

	int N;
	cin >> N;

	for (int row = 0; row < N; row++){
		// space
		for (int space = 0; space <= row; space++){
			cout << " " << " ";
		}
		// star
		for(int col = N-row; col >= 1; col--){
			cout << "*" << " ";
		}
	cout << endl;
	}
	return 0;
}
