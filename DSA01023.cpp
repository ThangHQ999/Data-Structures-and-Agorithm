#include <bits/stdc++.h>
using namespace std;

long long C[20][20];

void khoitao() {
    for (int i=0; i<=15; i++) {
        C[i][0] = 1;
        if (i <= 15) C[i][i] = 1;
        for (int j=1; j<i; j++) {
            C[i][j] = C[i-1][j-1] + C[i-1][j];
        }
    }
}

void solve() {
    int n, k, a[100001];
    cin>> n >> k;
    for (int i=1; i<=k; i++) {
        cin>> a[i];
    }
    long long rank = 1;
    int last = 0;
    for (int i=1; i<=k; i++) {
        for (int val=last+1; val<a[i]; val++) {
            int remaining_slots = k-i;
            int available_nums = n-val;
            rank += C[available_nums][remaining_slots];
        }
        last = a[i];
    }
    cout<< rank << endl;
}

int main() {
    khoitao();
    int T;
    cin>> T;
    while (T--)
    {
        solve();
    }
    
    return 0;
}