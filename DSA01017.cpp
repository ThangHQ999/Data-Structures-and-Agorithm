#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>> s;
    string res = "";
    res.push_back(s[0]);
    for (int i=1; i<s.length(); i++) {
        if (s[i-1] != s[i]) res+= "1";
        else res += "0";
    }
    cout<< res << endl;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}