#include<iostream>
using namespace std;
int main() {

	int N;
	cin >> N;
	int no = 1;

	for (int row = 1; row <= N; row ++){
		for (int col = 1; col <= row; col ++){
			cout << no <<'\t';
			no ++;
		}
		cout << endl;
	}
	return 0;
}
