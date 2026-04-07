#include <bits/stdc++.h>
using namespace std;

void solve() {
    stack<char> st;
    string str;
    getline(cin, str);
        for (int i=0; i<str.length(); i++) {
            if (str[i] != ')') {
                st.push(str[i]);
            } else {
                bool ok = false;
                while (!st.empty())
                {
                    char c = st.top(); st.pop();
                    if (c == '*' || c == '-' || c == '+' || c == '/') ok = true;
                    if (c == '(') break;
                }
                if (!ok) {
                    cout<< "Yes" << endl;
                    return;
                }
            }
        }
    cout<< "No" << endl;
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