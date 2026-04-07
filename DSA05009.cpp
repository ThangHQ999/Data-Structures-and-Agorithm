#include <bits/stdc++.h>
using namespace std;

int n, a[1001], sum = 0;
bool found = false;

void Try(int i, int total) {
    if (found || total > sum/2 || i>n) return;
    if (total == sum/2) {
        found = true;
        return;
    }
    Try(i+1, total + a[i]);
    Try(i+1, total);
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> n;
        found = false;
        sum = 0;
        memset(a, 0, sizeof(a));
        for (int i=1; i<=n; i++) {
            cin>> a[i];
            sum+=a[i];
        }
        if (sum % 2 == 0) {
            Try(1, 0);
            cout<< (found ? "YES": "NO") << endl;
        } else {
            cout<< "NO" << endl;
        }
    }
    
    return 0;
}