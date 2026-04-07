#include <bits/stdc++.h>
using namespace std;

void sinh(string s) {
    string res = "";
    res.push_back(s[0]);
    for (int i=1; i<s.length(); i++) {
        if (s[i] != res.back()) {
            res += "1";
        } else res += "0";
    }
    cout<< res << endl;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string s;
        cin>> s;
        sinh(s);
    }
    
    return 0;
}