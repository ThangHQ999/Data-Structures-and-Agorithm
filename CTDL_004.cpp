#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], res = 0;

void Try(int i, int cnt, int lastVal) {
    if (cnt == k) {
        res++;
        return;
    }
    for (int j=i; j<=n; j++) {
        if (a[j] > lastVal) {
            Try(j+1, cnt + 1, a[j]);
        }
    }
}

int main() {
    cin>> n >> k;
    for (int i=1; i<=n; i++) {
        cin>> a[i];
    }
    Try(1, 0, -1);
    cout<< res << endl;
    return 0;
}