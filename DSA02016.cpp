#include <bits/stdc++.h>
using namespace std;

int n, cnt = 0, x[10001], a[10001] = {0}, xuoi[10001] = {0}, nguoc[10001] = {0};

void khoitao() {
    for (int i=1; i<=n; i++) {
        a[i] = true;
    }
    for (int i=1; i<=(2*n-1); i++) {
        xuoi[i] = true;
        nguoc[i] = true;
    }
}

void Try(int i) {
    for (int j=1; j<=n; j++) {
        if (a[j] && xuoi[i-j+n] && nguoc[i+j-1]) {
            x[i] = j;
            a[j] = false;
            xuoi[i-j+n] = false;
            nguoc[i+j-1] = false;
            if (i == n) cnt++;
            else Try(i+1);
            a[j] = true;
            xuoi[i-j+n] = true;
            nguoc[i+j-1] = true;
        }
    }
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cnt = 0;
        cin>> n;
        khoitao();
        Try(1);
        cout<< cnt << endl;
    }
    return 0;
}