#include <bits/stdc++.h>
using namespace std;
void solve() {
    int k;
    cin>> k;
    string s;
    cin>> s;
    if (k >= s.length()) {
        cout<< 0 << endl;
        return;
    }
    map<char, int> m;
    for (char c: s) {
        m[c]++;
    }
    priority_queue<int> pq;
    for (auto const& [key, val] : m) {
        pq.push(val);
    }
    while (k>0 && !pq.empty())
    {
        int top = pq.top();
        pq.pop();
        if (top > 0) {
            top--;
            k--;
            pq.push(top);
        }
    }
    long long res = 0;
    while (!pq.empty()) {
        long long val = pq.top();
        res+=val*val;
        pq.pop();
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