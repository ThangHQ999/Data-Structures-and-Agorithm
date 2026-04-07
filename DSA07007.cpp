#include <bits/stdc++.h>
using namespace std;

string convertStr(string s) {
    int n = s.length();
    string res = "";
    stack<int> st;
    st.push(0);
    for (int i=0; i<n; i++) {
        if(s[i] == '(') {
            int currentState = st.top();
            char pre_char = (i > 0  ? s[i-1] : '+');
            if (pre_char == '-') {
                st.push(1 - currentState);
            } else {
                st.push(currentState);
            }
        } else if(s[i] == ')') {
            if (!st.empty()) st.pop();
        } else if (s[i] == '+' || s[i] == '-') {
            if (st.top() == 1) {
                res += (s[i] == '-' ? "+" : "-");
            } else {
                res += s[i];
            }
        } else {
            res += s[i];
        }
    }
    return res;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string s1, s2;
        cin>> s1 >> s2;
        cout<< (convertStr(s1) == convertStr(s2) ? "YES" : "NO") << endl;      
    }
    
    return 0;
}