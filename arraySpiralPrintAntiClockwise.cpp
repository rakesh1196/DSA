#include <bits/stdc++.h>
using namespace std;

void spiralAnticlockwise(int arr[10][10], int m, int n){
    int startRow = 0;
    int startCol = 0;
    int endRow = m - 1;
    int endCol = n - 1;

    while (startRow <= endRow && startCol <= endCol){
        // First column
        
            for (int i = startRow; i <= endRow; i++){
                cout << arr[i][startCol] << "," << " ";
            }
            startCol++;
        
        
        // Last row
       
            for (int i = startCol; i <= endCol; i++){
                cout << arr[endRow][i] << "," << " ";
            }
            endRow--;
        
        
        // Last column
        for (int i = endRow; i >= startRow; i--){
            cout << arr[i][endCol] << "," << " ";
        }
        endCol--;
        
        // First row
        for (int i = endCol; i >= startCol; i--){
            cout << arr[startRow][i] << ","<< " ";
        }
        startRow++;
    }
        cout << "END";
}

int main(){

    int arr[10][10];
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    spiralAnticlockwise(arr, m, n);

    return 0;
}
