#include <bits/stdc++.h>
using namespace std;

bool isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string s;
        cin>> s;
        stack<string> st;
        for (int i=0; i<s.length(); i++) {
            if (isOperator(s[i])) {
                string op2 = st.top(); st.pop();
                string op1 = st.top(); st.pop();
                string temp = s[i] + op1 + op2;
                st.push(temp);
            } else {
                st.push(string(1, s[i]));
            }
        }
        cout<< st.top() << endl;
    }
    
    return 0;
}