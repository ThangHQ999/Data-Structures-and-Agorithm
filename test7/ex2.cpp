#include <bits/stdc++.h>
using namespace std;
bool solve() {
    stack<char> st;
        string s;
        cin>> s;
        for (int i=0; i<s.length(); i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                st.push(s[i]);
            } else {
                if (st.empty()) {
                    return false;
                }
                char t = st.top();
                if (t == '(' && s[i] == ')') {
                    st.pop();
                } else if (t == '[' && s[i] == ']') {
                    st.pop();
                } else if (t == '{' && s[i] == '}') {
                    st.pop();
                }
            }
        }
    return st.empty();
}

int main() {
    int t;
    cin>> t;
    cin.ignore();
    while (t--)
    {
        cout<< (solve() ? "YES\n": "NO\n");
    }
    
    return 0;
}