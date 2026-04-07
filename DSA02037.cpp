#include <bits/stdc++.h>
using namespace std;
int n, a[100];
vector<int> res;
vector<vector<int>> results;

bool isPrime(int n) {
    if (n<2) return false;
    if (n==2 || n==3) return true;
    if (n%2 ==0) return false;
    for (int i=3; i<=sqrt(n); i+=2) {
        if (n%i == 0) return false;
    }
    return true;
}

void Try(int idx, int curSum) {
    for (int i=idx; i<n; i++) {
        res.push_back(a[i]);
        int newSum = curSum + a[i];
        if (isPrime(newSum)) {
            results.push_back(res);
        }
        Try(i + 1, newSum);
        res.pop_back();
    }
}

void solve() {
    results.clear();
    cin>> n;
    for (int i=0; i<n; i++) {
        cin>> a[i];
    }
    sort(a, a + n, greater<int>());
    res.clear();
    Try(0, 0);
    sort(results.begin(), results.end());

    for (const auto& row : results) {
        for (int j = 0; j < row.size(); j++) {
            cout << row[j] << (j == row.size() - 1 ? "" : " ");
        }
        cout << endl;
    }
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