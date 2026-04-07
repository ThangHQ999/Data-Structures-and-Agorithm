#include <bits/stdc++.h>
using namespace std;

int calculate(int x, int y, char o) {
    switch (o) {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    }
}

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
        stack<int> st;
        for (int i=0; i<s.length(); i++) {
            if (isOperator(s[i])) {
                int y = st.top(); st.pop();
                int x = st.top(); st.pop();
                int k = calculate(x, y, s[i]);
                st.push(k);
            } else {
                st.push(s[i] - '0');
            }
        }
        cout<< st.top() << endl;
    }
    
    return 0;
}