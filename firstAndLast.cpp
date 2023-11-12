#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target;
    cin >> target;

    int left = 0, right = n - 1;
    int alex = -1, novo = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            alex = mid;
            novo = mid;
            break;
        }

        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    if (alex != -1 && novo != -1) {
        for (int i = alex - 1; i >= 0; i--) {
            if (arr[i] == target) {
                alex = i;
            } else {
                break;
            }
        }

        for (int i = novo + 1; i < n; i++) {
            if (arr[i] == target) {
                novo = i;
            } else {
                break;
            }
        }

        cout << alex << " " << novo << endl;
    } else {
        cout << "-1 -1" << endl;
    }

    return 0;
}
