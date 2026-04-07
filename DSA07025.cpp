#include <bits/stdc++.h>
using namespace std;

long long calculate(long long x, long long y, char o) {
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

bool isOperator(string s) {
    return s == "*" || s == "-" || s == "+" || s == "/";
}

int main() {
    int t;
    cin>> t;
    cin.ignore();
    while (t--)
    {
        int n;
        cin>> n;
        vector<string> a(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        stack<long long> st;
        for (int i=0; i<n; i++) {
            if (isOperator(a[i])) {
                long long y = st.top(); st.pop();
                long long x = st.top(); st.pop();
                long long k = calculate(x, y, a[i][0]);
                st.push(k);
            } else {
                if (a[i][0] == '-') {
                    int len = a[i].length();
                    string num = a[i].substr(1, len -1);
                    int k = stoll(num);
                    st.push(-k);
                } else {
                    int k = stoll(a[i]);
                    st.push(k);
                }
            }
        }
        cout<< st.top() << endl;
    }
    
    return 0;
}