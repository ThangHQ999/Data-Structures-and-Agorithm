#include <bits/stdc++.h>
using namespace std;
string res;
void Try(int idx, int k, string s) {
    if (s > res) res = s;
    if (k == 0 || idx == s.length()) return;
    int n = s.length();
    char maxChar = s[idx];
    for (int i=idx+1; i<n; i++) {
        if (s[i] > maxChar) {
            maxChar = s[i];
        }
    }
    if (s[idx] != maxChar) {
        for (int i=idx+1; i<n; i++) {
            if (s[i] == maxChar) {
                swap(s[i], s[idx]);
                Try(idx+1, k-1, s);
                swap(s[i], s[idx]);
            }
        }
    } else {
        Try(idx+1, k, s);
    }
}

void solve() {
    string s;
    int k;
    cin>> k;
    cin>> s;
    res = s;
    Try(0, k, s);
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