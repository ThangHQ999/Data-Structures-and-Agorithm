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
        int cnt = 0;
        stack<char> st;
        for (int i=0; i<n; i++) {
            if (s[i] == '(') {
                st.push(s[i]);
            } else {
                if (!st.empty()) {
                    cnt++;
                    st.pop();
                }
            }
        }
        cout<< cnt * 2 << endl;
    }
    
    return 0;
}