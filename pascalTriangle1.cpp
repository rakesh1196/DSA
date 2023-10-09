#include <bits/stdc++.h>
using namespace std;

int main() {
    int rows;
    cin >> rows;

    int arr[rows][rows];
    for (int i = 0; i < rows; i++) {
        for (int k = rows; k > i; k--){
            cout << " " ;
        }
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
