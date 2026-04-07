#include <bits/stdc++.h>
using namespace std;
int n, k, s;
int cnt = 0;
int x[10000];

bool check() {
    int sum = 0;
    for (int i=1; i<=k; i++) {
        sum+=x[i];
    }
    return sum == s;
}

void Try(int i) {
    for (int j=x[i-1]+1; j<=n-k+i; j++) {
        x[i] = j;
        if (i==k) {
            if (check()) cnt++;
        } else Try(i+1);
    }
}
int main() {
    while (true)
    {
        cin>> n >> k >> s;
        memset(x, 0, sizeof(x));
        cnt = 0;
        if (n == 0 && k == 0 && s == 0) return 0;
        Try(1);
        cout<< cnt << endl;
    }
    
    return 0;
}