#include<bits/stdc++.h>
using namespace std;
int main () {

	int N;
	cin >> N;

	for (int row = 1; row <= N; row ++){
		for (int col = 1; col <= row; col ++){
			
			cout << row << " " ;				
	}
		for (int col2 = row+1; col2 <= N; col2 ++){

			cout << col2 << " ";
		}
		cout<<endl;
	}
	return 0;
}
