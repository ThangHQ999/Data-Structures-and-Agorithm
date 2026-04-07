#include <bits/stdc++.h>
using namespace std;
int n = 0, k = 0, a[1000001], cnt[50] = {0};
bool reset = false;

void khoitao() {
    reset = false;
    memset(cnt, 0, sizeof(cnt));
    for (int i=1; i<=k; i++) {
        cin>> a[i];
        cnt[a[i]] = 1;
    }
}

void sinh() {
    int i=k;
    while (i>0 && a[i] == n-k+i)
    {
        i--;
    }
    if (i != 0) {
        a[i] += 1;
        for (int j=i+1; j<=k; j++) {
            a[j] = a[i] + j - i;
        }
    } else {
        reset = true;
    }
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        cin>> n >> k;
        khoitao();
        sinh();
        int res = 0;
        if (!reset) {
            for (int i=1; i<=k; i++) {
                if (cnt[a[i]] == 0) res++;
            }
        } else res = k;
        cout<< res << "\n";
    }
    
    return 0;
}