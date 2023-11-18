#include <bits/stdc++.h>
using namespace std;

void sortSubjects(char arr[], int n) {
    int i = 0, p = 0, c = 0, m = 0;

        for (i = 0; i < n; i++) {
        if (arr[i] == 'P')
            p++;
        else if (arr[i] == 'C')
            c++;
        else
            m++;
    }

    i = 0;
    while (p > 0) {
        arr[i++] = 'P';
        p--;
    }
    while (c > 0) {
        arr[i++] = 'C';
        c--;
    }
    while (m > 0) {
        arr[i++] = 'M';
        m--;
    }
}

int main() {
    int n;
    cin >> n;
    char arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sortSubjects(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
