#include <bits/stdc++.h>
using namespace std;

bool compare(string a, string b) {
    return (a + b) > (b + a);
}

string largestNumber(int arr[], int n) {
    string str[n];
    for (int i = 0; i < n; i++) {
        str[i] = to_string(arr[i]);
    }

    sort(str, str + n, compare);

    string result = "";
    for (int i = 0; i < n; i++) {
        result += str[i];
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << largestNumber(arr, n) << endl;
    }

    return 0;
}
