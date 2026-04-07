#include <bits/stdc++.h>
using namespace std;

int priority(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string s;
        cin>> s;
        string res = "";
        stack<char> st;
        for (int i=0; i<s.length(); i++) {
            if (isalnum(s[i])) {
                res += s[i];
            } else if (s[i] == ')') {
                while (!st.empty() && st.top() != '(')
                {
                    res += st.top();
                    st.pop();
                }
                if (!st.empty()) st.pop();
            } else if (s[i] == '(') {
                st.push(s[i]);
            } else {
                while (!st.empty() && (priority(st.top()) >= priority(s[i])))
                {
                    res += st.top();
                    st.pop();   
                }
                st.push(s[i]);
            }
        }
        while (!st.empty())
        {
            if (st.top() != '(') res += st.top();
            st.pop();
        }
        cout<< res << endl;
    }
    
    return 0;
}