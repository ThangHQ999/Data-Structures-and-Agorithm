#include <bits/stdc++.h>
using namespace std;
int n, a[100001], x[1000001];

void khoitao() {
    for (int i=n; i>=1; i--) {
        a[i] = true;
        x[i] = i;
    }
}

void hienthi() {
    for (int i=1; i<=n; i++) {
        cout<< x[i];
    }
    cout<< " ";
}

void Try(int i) {
    for (int j=n; j>=1; j--) {
        if (a[j]) {
            x[i] = j;
            a[j] = false;
            if (i==n) {
                hienthi();
            } else {
                Try(i+1);
            }
            a[j] = true;
        }
    }
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        cin>> n;
        khoitao();
        Try(1);
        cout<< "\n";
    }
    
    return 0;
}