#include <bits/stdc++.h>
using namespace std;
int a[100001], n, x[100001], cnt = 0;

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
            hienthi();
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