#include <bits/stdc++.h>
using namespace std;

bool push1(string st) {
    stack<char> st1;
    for (int i = 0; i < st.size(); i++) {
        if (st[i] == '(' || st[i] == '{' || st[i] == '[') {
            st1.push(st[i]);
        } else {
            if (st1.empty()) return false;
            char e = st1.top();
            st1.pop();
            if ((st[i] == ')' && e != '(') || 
                (st[i] == '}' && e != '{') || 
                (st[i] == ']' && e != '[')) {
                return false;
            }
        }
    }
    return st1.empty();
}

int main() {
    string st = "{({})}";
    if (push1(st)) {
        cout << "Balanced" << endl;
    } else {
        cout << "Not Balanced" << endl;
    }
    return 0;
}
