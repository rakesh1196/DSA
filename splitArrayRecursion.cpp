#include <bits/stdc++.h>
using namespace std;

int countWays(vector<int>& arr, int index, int sum1, int sum2) {
    if (index == arr.size()) {
        return sum1 == sum2;
    }
    int ways = 0;
    ways += countWays(arr, index+1, sum1+arr[index], sum2);
    ways += countWays(arr, index+1, sum1, sum2+arr[index]);
    return ways;
}

void printGroups(vector<int>& arr, int index, int sum1, int sum2, vector<int>& group1, vector<int>& group2) {
    if (index == arr.size()) {
        if (sum1 == sum2) {
            for (int i = 0; i < group1.size(); i++) {
                cout << group1[i] << " ";
            }
            cout << "and ";
            for (int i = 0; i < group2.size(); i++) {
                cout << group2[i] << " ";
            }
            cout << endl;
        }
        return;
    }
    group1.push_back(arr[index]);
    printGroups(arr, index+1, sum1+arr[index], sum2, group1, group2);
    group1.pop_back();
    group2.push_back(arr[index]);
    printGroups(arr, index+1, sum1, sum2+arr[index], group1, group2);
    group2.pop_back();
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int ways = countWays(arr, 0, 0, 0);
    vector<int> group1, group2;
    printGroups(arr, 0, 0, 0, group1, group2);
	cout << ways << endl;
    return 0;
}
