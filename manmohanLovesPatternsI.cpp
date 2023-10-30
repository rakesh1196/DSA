#include<bits/stdc++.h>
using namespace std;
int main() {
	int N;
	cin >> N;

	for (int row = 1; row <= N; row++){
		for (int col = 1; col <= row; col++){
			cout << "1";
		if (row % 2 == 0){
			for (int col2 = 2; col <= row-2; col++){
				cout << "0";
			}
		}	
	}
		cout << endl;
		
	}
	return 0;
}
