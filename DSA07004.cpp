#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin>> s;
    int cnt_open = 0, cnt_closed = 0;
    for (int i=0; i<s.length(); i++) {
        if (s[i] == ')') {
            if (cnt_open > 0) {
                cnt_open--;
            } else {
                cnt_closed++;
            }
        } else {
            cnt_open++;
        }
    }
    int ans = (cnt_open+1)/2+(cnt_closed+1)/2;
    cout<< ans << endl;
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