#include <bits/stdc++.h>
using namespace std;

void intersection(int arr1[], int arr2[], int n) {
    unordered_map<int, int> freq;
    vector<int> intersection;


    for (int i = 0; i < n; i++) {
        freq[arr1[i]]++;
    }

       for (int i = 0; i < n; i++) {
        if (freq[arr2[i]] > 0) {
            intersection.push_back(arr2[i]);
            freq[arr2[i]]--;
        }
    }

       sort(intersection.begin(), intersection.end());
        cout << "[";
        
    for (int i = 0; i < intersection.size(); i++) {
        cout << intersection[i];
        if (i != intersection.size() - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;
}

int main() {
    int n;
    cin >> n;

    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }

    intersection(arr1, arr2, n);

    return 0;
}
