#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int balls[n];
    
    for (int i = 0; i < n; i++) {
        cin >> balls[i];
    }

    int i = 0, j = 0, k = n - 1;
    while (j <= k) {
        if (balls[j] == 0) {
            swap(balls[i], balls[j]);
            i++;
            j++;
        } 
		else if (balls[j] == 2) {
            swap(balls[j], balls[k]);
            k--;
        } 
		else {
            j++;
        }
    }

    for (int i = 0; i < n; i++) {
        cout << balls[i] << " ";
    }
    cout << endl;

    return 0;
}
