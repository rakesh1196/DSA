#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;  
vector<int> rows;  
int cnt;  

void solve(int c, int n) {
    if (c == n) {
        ans.push_back(rows);  
        cnt++;  
        return;
    }

    
    for (int r = 0; r < n; r++) {
        bool can_place = true;
    
        for (int prev_c = 0; prev_c < c; prev_c++) {
            int prev_r = rows[prev_c];
            if (prev_r == r || prev_r - r == prev_c - c || prev_r - r == c - prev_c) {
                can_place = false;
                break;
            }
        }
        if (can_place) {
            rows[c] = r; 
            solve(c+1, n);  
        }
    }
}

int main() {
    int n;
    cin >> n;

    rows.resize(n);  
    solve(0, n);

    for (auto& v : ans) {
        for (int i = 0; i < n; i++) {
            cout << "{" << i+1 << "-" << v[i]+1 << "} ";
        }
        cout << " ";
    }
    cout << endl;
    cout << cnt << endl;

    return 0;
}
