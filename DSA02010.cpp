#include <bits/stdc++.h>
using namespace std;

int n, x;
vector<int> a;
bool ok;
vector<vector<int>> res;

void hienthi() {
    cout<< res.size() << " ";
    for (int j=0; j<res.size(); j++) {
        cout << "{";
        for (int i = 0; i < res[j].size(); ++i) {
            cout << res[j][i];
            if (i != res[j].size() - 1) cout << " ";
        }
        cout << "} ";
    }
}

void Try(int limit, int value, vector<int> v) {
    if (value == x) {
        ok = true;
        res.push_back(v);
    }
    for (int i = 0; i < n; ++i) {
        if (a[i] >= limit && value + a[i] <= x) {
            v.push_back(a[i]);
            Try(a[i], value + a[i], v);
            v.pop_back();
        }
    }
}

void testCase() {
    cin >> n >> x;
    a.resize(n);
    res.clear();
    ok = false;
    for (int &i : a) cin >> i;
    sort(a.begin(), a.end());
    Try(1, 0, {});
    
    if (!ok) cout << -1;
    else hienthi();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int T = 1; cin >> T;
    while (T--) {
        testCase();
        cout << "\n";
    }
    return 0;
}