#include <bits/stdc++.h>
using namespace std;

void swastik(int N){

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i < N / 2) {
            if (j < N / 2) {
            if (j == 0){
                cout << "*";
            }
            else{
            cout << " ";
        }
}
        else if (j == N / 2){
            cout << "*";
        }
        else{
            if (i == 0){
            cout << "*";
        }
    }
}
        else if (i == N / 2){
            cout << "*";
}
        else {
        if (j == N / 2 || j == N - 1){
            cout << "*";
        }
        else if (i == N - 1) {

        if (j <= N / 2 || j == N - 1){
            cout << "*";
}
        else{
            cout << " ";
        }
}
        else{
            cout << " ";
        }
    }
}
        cout << "\n";
    }
}

    int main(){

        int N;
        cin >> N;
        swastik(N);

        return 0;  
}
