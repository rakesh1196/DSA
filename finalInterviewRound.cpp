#include <bits/stdc++.h>
using namespace std;

string simplifyPath(string path) {
    stack<string> st;
    string dir;
    path += "/";
    for (int i = 0; i < path.size(); i++) {
        if (path[i] == '/') {
            if (dir == "..") {
                if (!st.empty()) {
                    st.pop();
                }
            } else if (dir != "." && !dir.empty()) {
                st.push(dir);
            }
            dir.clear();
        } else {
            dir.push_back(path[i]);
        }
    }
    string result;
    while (!st.empty()) {
        result = "/" + st.top() + result;
        st.pop();
    }
    return result.empty() ? "/" : result;
}

int main() {
    string path;
    cin >> path;
    cout << simplifyPath(path) << endl;
    return 0;
}
