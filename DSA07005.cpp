#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string s;
        cin>> s;
        int n = s.length();
        string res = "";
        stack<int> st;
        st.push(0);
        for (int i=0; i<n; i++) {
            if (s[i] == '(') {
                int current_state = st.top();
                char pre_char = (i>0) ? s[i-1]: '+';
                if (pre_char == '-') {
                    st.push(1 - current_state);
                } else {
                    st.push(current_state);
                }
            }
            else if (s[i] == ')') {
                if (!st.empty()) st.pop();
            } else if (s[i] == '+' || s[i] == '-') {
                if (st.top() == 1) {
                    res += (s[i] == '+' ? '-' : '+');
                } else {
                    res += s[i];
                }
            } else {
                res += s[i];
            }
        }
        
        cout<< res << endl;
    }
    
    return 0;
}