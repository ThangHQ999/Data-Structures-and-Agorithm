#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> res;

void Try(int lastVal, int remain, vector<int>& a) {
    if (remain == 0) {
        res.push_back(a);
        return;
    }
    for (int i=lastVal; i>=1; i--) {
        if (i <= remain) {
            a.push_back(i);
            Try(i, remain-i, a);
            a.pop_back();
        }
    }
}

void solve() {
    cin>> n;
    res.clear();
    vector<int> v;
    Try(n, n, v);
    cout<< res.size() << endl;
    for (auto a: res) {
        cout<< "(";
        for (int i=0; i<a.size(); i++) {
            cout<< a[i] << (i == a.size() -1 ? "" : " ");
        }
        cout<< ") ";
    }
    cout<< endl;
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