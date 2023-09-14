#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int min, max, step, cel;
    cin >> min >> max >> step;
    
    int x=min;
    while(x <= max){
        cel = (x - 32) * 5/9;
        cout << x << " " << cel << endl;
        x = x + step;
    }
    return 0;
}
