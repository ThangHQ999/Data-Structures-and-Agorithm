#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c) {
    return c == '*' || c == '-' || c == '+' || c == '/';
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string s;
        cin>> s;
        stack<string> st;
        for (int i=s.length()-1; i>=0; i--) {
            string tmp = string(1, s[i]);
            if (isOperator(s[i])) {
                string x = st.top(); st.pop();
                string y = st.top(); st.pop();
                string str = x+y+tmp;
                st.push(str);
            } else {
                st.push(tmp);
            }
        }
        cout<< st.top() << endl;
    }
    
    return 0;
}