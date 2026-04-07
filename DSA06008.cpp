#include <bits/stdc++.h>
using namespace std;

long long countPairs(int x, vector<int>& y, int n, const vector<int>& cntY) {
    if (x == 0) return 0;
    if (x == 1) return cntY[0];

    auto it = upper_bound(y.begin(), y.end(), x);
    long long ans = distance(it, y.end());

    ans += (cntY[0] + cntY[1]);
    if (x==2) {
        ans -= (cntY[3] + cntY[4]);
    }
    if (x == 3) {
        ans += cntY[2];
    }
    return ans;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, m;
        cin>> n >> m;
        vector<int> x(n), y(m);
        vector<int> cntY(5, 0);
        for (int i=0; i<n; i++) {
            cin>> x[i];
        }
        for (int i=0; i<m; i++) {
            cin>> y[i];
            if (y[i] < 5) cntY[y[i]]++;
        }
        sort(y.begin(), y.end());
        long long totalPairs = 0;
        for (int val :x ) {
            totalPairs+=countPairs(val, y, m, cntY);
        }
        cout<< totalPairs << endl;
    }
    
    return 0;
}