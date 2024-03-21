#include <bits/stdc++.h>
using namespace std;

vector<int> partition(string s) {
    int n = s.length();
    vector<int> last(26, -1);
    vector<int> partitions;
    int start = 0, end = 0;
    for (int i = 0; i < n; i++) {
        last[s[i] - 'a'] = i;
    }
    for (int i = 0; i < n; i++) {
        end = max(end, last[s[i] - 'a']);
        if (i == end) {
            partitions.push_back(end - start + 1);
            start = end + 1;
        }
    }
    return partitions;
}

int main() {
    string s;
    cin >> s;
    vector<int> partitions = partition(s);
    for (int i = 0; i < partitions.size(); i++) {
        cout << partitions[i] << " ";
    }
    cout << endl;
    return 0;
}
