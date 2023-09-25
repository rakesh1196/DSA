#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    cin >> m >> n;

    int a[m][n];
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }

    int row=0, col=0;
    bool up=true;

    for(int i=0; i<m*n; i++){
        cout << a[row][col] << " ";

        if(up){
            if(row==0 || col==n-1){
                up=false;

                if(col==n-1)
                    row++;
                else
                    col++;
            }
            else{
                row--;
                col++;
            }
        }
        else{
            if(col==0 || row==m-1){
                up=true;

                if(row==m-1)
                    col++;
                else
                    row++;
            }else{
                row++;
                col--;
            }
        }
    }

    return 0;
}
