#include<bits/stdc++.h>
using namespace std;
int main() {

	int N;
	cin >> N;

	for (int row = 1; row <= N; row ++){
		for (int col = 1; col <= row; col ++){
			cout << col << '\t';
		}
		for (int space = 1; space <= 2*(N-row)-1; space++){
			cout << " " << '\t';
		}
		for (int col = row; col >= 1; col--){
		    if(col!=N){
		    cout << col << '\t';
		    }
		}
		cout << endl;
		}
		return 0;
			
}
