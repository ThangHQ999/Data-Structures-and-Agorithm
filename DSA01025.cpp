#include <bits/stdc++.h>
using namespace std;
int n, k;
char a[10000001];

void khoitao() {
    for (int i=1; i<=k; i++) {
        a[i] = i;
    }
}

void hienthi() {
    for (int i=1; i<=k; i++) {
        cout<< (char)('A' + (a[i]-1));
    }
    cout<< endl;
}

void Try(int i) {
    for (int j=a[i-1]+1; j<=n-k+i; j++) {
        a[i] = j;
        if (i==k) hienthi();
        else Try(i+1);
    }
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        cin>> n >> k;
        khoitao();
        Try(1);
    }
    
    return 0;
}