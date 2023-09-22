#include<bits/stdc++.h>
using namespace std;
int main() {
	int N;
	cin >> N;
	int matrix [N] [N];

	for (int row = 0; row < N; row++){
		for (int col = 0; col < N; col++){
			cin >> matrix [row] [col];
		}
	}
	for(int row = 0; row < N/2; row++){
      for(int col = row; col < N-row-1; col++){
          int temp = matrix [row] [col];
          matrix [row] [col] = matrix [col] [N-row-1];
          matrix [col] [N-row-1] = matrix [N-row-1] [N-col-1];
          matrix [N-row-1] [N-col-1] = matrix[N-col-1] [row];
          matrix [N-col-1] [row] = temp;
      }
  }
	for(int row = 0; row < N; row++){
      for(int col = 0; col < N; col++){
          cout << matrix [row] [col]<<" ";
      }
      cout << endl;
  }
	return 0;
}
