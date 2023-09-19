#include<bits/stdc++.h>
using namespace std;
int main() {

	int M, N;
	
	cin >> M >> N;

	
	int array [M][N];

	for (int row=0; row<M; row++){
		for (int col=0; col<N; col++){
		cin >> array[row][col];
	}
}

	for (int row=0; row<M; row++){
		if (row % 2 == 0){
			for (int col=0; col<N; col++){
				cout << array[row][col] << "," << " " ;
			}
				
		}   else{
			for (int col=N-1; col>=0; col--){
				cout << array[row][col] << "," << " " ;
			}	
		}
	}
	cout << "END";
	return 0;
}
