#include <bits/stdc++.h>
using namespace std;

int countPaths(int r, int c, int n1, int n2) {
    if (r == n1 && c == n2) {
        return 1;
    }
    if (r > n1 || c > n2) {
        return 0;
    }
    int right = countPaths(r, c+1, n1, n2);
    int down = countPaths(r+1, c, n1, n2);
    int diagonal = countPaths(r+1, c+1, n1, n2);
    return right + down + diagonal;
}

void printPaths(int r, int c, int n1, int n2, vector<string>& paths, string pathSoFar) {
    if (r == n1 && c == n2) {
        paths.push_back(pathSoFar);
        return;
    }
    if (r > n1 || c > n2) {
        return;
    }
	printPaths(r+1, c, n1, n2, paths, pathSoFar + "V");
    printPaths(r, c+1, n1, n2, paths, pathSoFar + "H");
    printPaths(r+1, c+1, n1, n2, paths, pathSoFar + "D");
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;

    int paths = countPaths(1, 1, n1, n2);
    

    vector<string> allPaths;
    printPaths(1, 1, n1, n2, allPaths, "");
    for (string path : allPaths) {
        cout << path << " ";
    }
	cout << endl;
	cout << paths;
    return 0;
}
