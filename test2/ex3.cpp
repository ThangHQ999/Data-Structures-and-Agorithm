#include <bits/stdc++.h>
using namespace std;

int n, a[10000001], step = 0;

bool isPerfectSquare(int n) {
    int s = sqrt(n);
    return n == s*s;
}

bool isFibo(int n) {
    return isPerfectSquare(5*n*n - 4) || isPerfectSquare(5*n*n + 4);
}

void hienthi() {
    cout<< step << ": ";
    for (int i=1; i<=n; i++) {
        cout<< a[i] << " ";
    }
    cout<< endl;
}

void Try(int i) {
    for (int j=0; j<=1; j++) {
        a[i] = j;
        if (i==n) {
            step++;
            if (isFibo(step)) hienthi();
        }
        else Try(i+1);
    }
}

int main() {
    cin>> n;
    Try(1);
    return 0;
}