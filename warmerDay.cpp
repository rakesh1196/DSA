#include <bits/stdc++.h>
using namespace std;

vector<int> dailyTemperature(vector<int>& temperature) {
    int n = temperature.size();
    vector<int> result(n, 0);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && temperature[st.top()] < temperature[i]) {
            int j = st.top();
            st.pop();
            result[j] = i - j;
        }
        st.push(i);
    }
    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> temperature(n);
    for (int i = 0; i < n; i++) {
        cin >> temperature[i];
    }
    vector<int> result = dailyTemperature(temperature);
  
    for (int i = 0; i < n; i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
