#include <bits/stdc++.h>
using namespace std;

int n, k, a[1000001];

bool check() {
    int cnt = 0;
    for (int i=1; i<=n; i++) {
        if (a[i] == 1) {
            cnt++;
        }
    }
    return cnt == k;
}

void hienthi() {
    for (int i=1; i<=n; i++) {
        cout<< a[i];
    }
    cout<< endl;
}

void Try(int i) {
    for (int j=0; j<=1; j++) {
        a[i] = j;
        if (i==n) {
            if (check()) hienthi();
        } else {
            Try(i+1);
        }
    }
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        cin>> n >> k;
        Try(1);
    }
    return 0;
}