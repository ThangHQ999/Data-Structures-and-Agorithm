#include <bits/stdc++.h>
using namespace std;

int save[100056];
int Try(int n) {
    if (n == 1) {
        return 0;
    }
    if (save[n] != -1) {
        return save[n];
    }
    int res = Try(n-1) + 1;
    if (n % 2 == 0) {
        res = min(res, Try(n/2) + 1);
    }
    if (n % 3 == 0) {
        res = min(res, Try(n/3) + 1);
    }
    return save[n] = res;
}

void solve() {
    int n;
    cin>> n;
    cout<< Try(n) << endl;
}
int main() {
    memset(save, -1, sizeof(save));
    int t;
    cin>> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}