#include <bits/stdc++.h>
using namespace std;
int a[100001], n, m, x[100001];
long long cnt = 0;

bool isFerfectSquare(long long n) {
    long long s = sqrt(n);
    return (long long)n == (long long)s*s;
}

bool isFibo(long long n) {
    return isFerfectSquare(5*n*n-4) || isFerfectSquare(5*n*n+4);
}

void hienthi() {
    cout<< cnt << ": ";
    for (int i=1; i<=n; i++) {
        cout<< a[i] << " ";
    }
    cout<< endl;
}

void Try(int i) {
    for (int j=1; j<=n; j++) {
        if (!x[j]) {
            a[i] = j;
            x[j] = 1;
        if (i == n) {
            cnt++;
            if (isFibo(cnt)) {
                hienthi();
            }
        }
        else Try(i+1);
        x[j] = 0;
        }
    }
}

int main() {

        cin>> n;
        Try(1);

    
    return 0;
}