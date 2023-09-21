#include <bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
     cin >> m >> n;
    int arr[n][m];   

	// User input element
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
      
    int key;
    int present = 0;
    cin >> key;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] == key){
                present = 1;
                break;
            }
        }
    }
    if (present == 1){
        cout << "1";
    } else {
        cout << "0";
    }
    return 0;
}
