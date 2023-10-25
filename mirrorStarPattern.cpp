#include<bits/stdc++.h> 
using namespace std;

int main(){
    
    int N; 
    cin >> N;

    int x = N/2+1; 

    for(int i = 1; i <= N; i++){ 
        for(int j = 1; j <= N; j++){ 
            if (j >= x && j <= N - x + 1){ 
                cout << "*" << " "; 
    } else { 
    cout << " " << " "; 
    } 
} 
    if (i <= N / 2){
       x--; 
    } else {
       x++;  
} 
    cout << endl; 
} 
    return 0; 
} 
