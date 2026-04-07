#include <bits/stdc++.h>
using namespace std;

int n, a[10000001];

long long giaithua(int x) {
    long long res = 1;
    for (int i=2; i<=x; i++) {
        res*=i;
    }
    return res;
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        cin>> n;
        long long ans = 1;
        for (int i=1; i<=n; i++) {
            cin>> a[i];
        }
        for (int i = 1; i <= n; i++) {
            int dem = 0;
            for (int j = i + 1; j <= n; j++) {
                if (a[j] < a[i]) {
                    dem++;
                }
            }
        
            ans += dem * giaithua(n - i);
        }
        cout<< ans << endl;
    }
    
    return 0;
}