#include<bits/stdc++.h>
using namespace std;
void setZeroes(vector < vector < int >> & matrix) {
int col0 = 0, rows = matrix.size(), cols = matrix[0].size();
for (int i = 0; i < rows; i++) {
	//checking if 0 is present in the 0th column or not
	if (matrix[i][0] == 1) col0 = 1;
	for (int j = 1; j < cols; j++) {
	if (matrix[i][j] == 1) {
		matrix[i][0] = 1;
		matrix[0][j] = 1;
	}
	}
}
//traversing in the reverse direction and
//checking if the row or col has 0 or not
//and setting values of matrix accordingly.
for (int i = rows - 1; i >= 0; i--) {
	for (int j = cols - 1; j >= 1; j--) {
	if (matrix[i][0] == 1 || matrix[0][j] == 1) {
		matrix[i][j] = 1;
	}
	}
	if (col0 == 1) {
	matrix[i][0] = 1;
	}

}

}

int main() {
vector < vector < int >> arr;
arr = {{1, 0, 2, 1}, {3, 4, 5, 2}, {0, 3, 0, 5}};
setZeroes(arr);
cout<<"The Final Matrix is "<<endl;
for (int i = 0; i < arr.size(); i++) {
	for (int j = 0; j < arr[0].size(); j++) {
	cout << arr[i][j] << " ";
	}
	cout << "\n";
}
}
