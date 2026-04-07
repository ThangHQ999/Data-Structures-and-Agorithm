#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isOperator(string s) {
    return s == "+" || s == "-" || s == "*" || s == "/";
}
ll calculate(ll a, ll b, string op) {
    if (op == "+") return a + b;
    if (op == "-") return a - b;
    if (op == "*") return a * b;
    if (op == "/") return a / b;
    return 0;
}

ll solve(int i, int n, vector<string>& a) {
    if (i >= n) return 0;
    if (!isOperator(a[i])) {
        return stoll(a[i]);
    }
    ll leftVal = solve(2*i+1, n, a);
    ll rightVal = solve(2*i+2, n, a);
    return calculate(leftVal, rightVal, a[i]);
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        vector<string> a(n);
        for (int i=0; i<n; i++) {
            cin>> a[i];
        }
        cout<< solve(0, n, a) << endl;
    }
    
    return 0;
}