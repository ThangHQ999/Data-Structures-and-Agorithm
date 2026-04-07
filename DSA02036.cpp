#include <bits/stdc++.h>
using namespace std;

int a[1000], n, temp[1000];

void hienthi() {
    for (int j=1; j<=n; j++) {
        if (a[j] == 1) cout<< temp[j] << " ";
    }
    cout<< endl;
}

bool check() {
    int sum = 0;
    for (int j=1; j<=n; j++) {
        if (a[j] == 1) sum+= temp[j];
    }
    return sum%2 ==1;
}

void Try(int i) {
    for (int j=0; j<=1; j++) {
        a[i] = j;
        if (i ==n) {
            if (check()) hienthi();
        } else {
            Try(i+1);
        }
    }
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> n;
        memset(a, 0, sizeof(a));
        for (int i=n; i>=1; i--) {
            cin>> temp[i];
        }
        sort(temp+1, temp+n+1, [](int x, int y) {
            return x>y;
        });
        Try(1);
    }
    return 0;
}