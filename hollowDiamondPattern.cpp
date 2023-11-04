#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, j, n;
    cin >> n;

    int c1 = (n-1)/2; 
    int c2 = 3*n/2-1; 
  
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if (i+j <= c1 || i-j >= c1 || j-i >= c1 || i+j >= c2) {
                cout << "* " << "\t";
            } else {
                cout << "  " << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}
