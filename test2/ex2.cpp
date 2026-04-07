#include <bits/stdc++.h>
using namespace std;

int n, k, a[10000001], cnt = 0;

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
            if (cnt%k == 0) {
                hienthi();
            }
            cnt++;
        }
        else Try(i+1);
    }
}

int main() {
    cin>> n >> k;
    Try(1);
    return 0;
}