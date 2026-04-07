#include <bits/stdc++.h>
using namespace std;
int n, k;
int a[100];

void hienthi() {
    for (int i=1; i<=k; i++) {
        cout<< a[i] << " ";
    }
    cout<< endl;
}

void Try(int i) {
    for (int j= (i == 1 ? 1 : a[i-1]); j<=n; j++) {
        a[i] = j;
        if (i == k) hienthi();
        else Try(i + 1);
    }
}

int main() {
    cin>> n >> k;
    a[0] = 0;
    Try(1);
    return 0;
}