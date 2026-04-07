#include <bits/stdc++.h>
using namespace std;
int N, k, a[10001];

void sinh() {
    int i = k;
    while (a[i] == N-k+i)
    {
        a[i] -=1;
        i--;
    }
    if (i != 0) {
        a[i] += 1;
        for (int j=i+1; j<=k; j++) {
            a[j] = a[i] + j -i;
        }
    } else {
        for (int j=1; j<=k; j++) {
            a[j] = j;
        }
    }
}

void hienthi() {
    for (int i=1; i<=k; i++) {
        cout<< a[i] << " ";
    }
    cout<< endl;
}

int main() {
    int T;
    cin>> T;
    while (T--)
    {
        cin>> N >> k;
        for (int i=1; i<=k; i++) {
            cin>> a[i];
        }
        sinh();
        hienthi();
    } 
    return 0;
}