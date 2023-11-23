#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, r, c;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cin >> r >> c;
    if (m * n != r * c) {
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    } else {
       
        int reshape[r][c];
        int k = 0, l = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                reshape[k][l++] = arr[i][j];
                if (l == c) {
                    k++;
                    l = 0;
                }
            }
        }
        
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << reshape[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
