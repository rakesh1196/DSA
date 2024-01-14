#include <bits/stdc++.h>
using namespace std;

bool areBracketsBalanced(string expr, int index = 0, stack<char> st = stack<char>()) {
    if (index == expr.length()) {
        return st.empty();
    }

    if (expr[index] == '(' || expr[index] == '[' || expr[index] == '{') {
        st.push(expr[index]);
    } else if (expr[index] == ')' || expr[index] == ']' || expr[index] == '}') {
        if (st.empty()) {
            return false;
        }

        char top = st.top();
        st.pop();

        if ((top == '(' && expr[index] != ')') || (top == '[' && expr[index] != ']') || (top == '{' && expr[index] != '}')) {
            return false;
        }
    }

    return areBracketsBalanced(expr, index + 1, st);
}

int main() {
    string expr;
    getline(cin, expr);

    bool result = areBracketsBalanced(expr);
    cout << boolalpha << result << endl;

    return 0;
}
