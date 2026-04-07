#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, k;
        cin>> n >> k;
        int cnt = k;
        int x[k+1], vs[n+1] = {0};
        for (int i=1; i<=k; i++) {
            cin>> x[i];
            vs[x[i]] = 1;
        }
        int i = k;
        while (x[i] == n-k+i)
        {
            i--;
        }
        if (i == 0) {
        cout << k << endl;
        continue;
    }
        x[i] += 1;
        for (int j=i+1; j<=k; j++) {
            x[j] = x[i] + j - i;
        }
        int count_new = 0;
        for (int j=1; j<=k; j++) {
            if (vs[x[j]] == 0) count_new++;  
        }
        cout<< count_new  << endl;
    }
    return 0;
}