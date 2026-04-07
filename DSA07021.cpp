#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>> s;
    int curLen = 0;
    int maxLen = 0;
    stack<int> st;
    st.push(-1);
    for (int i=0; i<s.length(); i++) {
        if (s[i] == '(') {
            st.push(i);
        } else if (s[i] == ')') {
            st.pop();
            if (st.empty()) {
                st.push(i);
            } else {
                curLen = i - st.top();
                maxLen = max(curLen, maxLen);
            }
        }
    }
    cout<< maxLen << endl;
}

int main() {
    int t;
    cin>> t;
    cin.ignore();
    while (t--)
    {
        solve();
    }
    
    return 0;
}