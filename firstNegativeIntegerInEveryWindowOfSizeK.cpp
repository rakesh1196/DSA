#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        int n, k;
        cin >> n >> k;
        int* arr = new int[n];
        deque<int> dq;
        
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            
            if (arr[j] < 0) {
                dq.push_back(j);
            }
            
            if (j >= k) {
                if (!dq.empty() && dq.front() <= j - k) {
                    dq.pop_front();
                }
            }
            
            if (j >= k - 1) {
                if (dq.empty()) {
                    cout << "0 ";
                } else {
                    cout << arr[dq.front()] << " ";
                }
            }
        }
        
        cout << endl;
        
        delete[] arr;
    }
    
    return 0;
}
