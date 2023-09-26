#include <bits/stdc++.h>
using namespace std;

bool isToeplitz(int mat[][10], int m, int n) {
    for(int i = 0; i < m; i++) {
        int row = i, col = 0, val = mat[i][0];
        while(row < m && col < n) {
            if(mat[row][col] != val) {
                return false;
            }
            row++;
            col++;
        }
    }
    for(int i = 1; i < n; i++) {
        int row = 0, col = i, val = mat[0][i];
        while(row < m && col < n) {
            if(mat[row][col] != val) {
                return false;
            }
            row++;
            col++;
        }
    }
    return true;
}

int main() {
    int m, n;
    cin >> m >> n;

    int mat[10][10];
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    bool is_toeplitz = isToeplitz(mat, m, n);
    if(is_toeplitz) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
