#include <bits/stdc++.h>
using namespace std;
int n, k, a[10001], temp[10001];
set<int> s;

void khoitao() {
    for (int i=1; i<=n; i++) {
        int x;
        cin>> x;
        s.insert(x);
    }
    n = 1;
    for (auto p: s) {
        temp[n] = p;
        n++;
    }
    n-=1;
}

void hienthi() {
    for (int i=1; i<=k; i++) {
        cout<< temp[a[i]] << " ";
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
    cin>> n >> k;
    khoitao();
    Try(1);
    return 0;
}