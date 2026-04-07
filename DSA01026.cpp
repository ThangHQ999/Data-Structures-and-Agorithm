#include <bits/stdc++.h>
using namespace std;
int n, a[10000001] = {0};

void hienthi() {
    for (int i=1; i<=n; i++) {
        cout<< a[i];
    }
    cout<< endl;
}

bool check() {
    if (a[6] == 0 || a[1] != 8 || a[n] != 6) return false;
    for (int i=1; i<=n; i++) {
        if (a[i-1] == 8 && a[i] == 8) return false;
        if (i>2 && a[i-3] == a[i-2] && a[i-1] == a[i-2] && a[i] == a[i-1] && a[i] == 6) return false;
    }
    return true;
}

void Try(int i) {
    for (int j=0; j<=1; j++) {
        a[i] = j == 0 ? 6 : 8;
        if (i==n) {
            if (check()) {
                hienthi();
            }
        } else {
            Try(i+1);
        }
    }
}

int main() {
    cin>> n;
    Try(1);
    return 0;
}