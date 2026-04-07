#include <bits/stdc++.h>
using namespace std;

int n, a[100];

void hienthi() {
    for (int i=0; i<n; i++) {
        cout<< a[i] << " ";
    }
    cout<< endl;
}

bool checkDoiXung(int arr[]) {
    for (int j=0; j<=n/2; j++) {
        if (a[j] != a[n-j-1]) return false;
    }
    return true;
}

void Try(int i) {
    for (int j=0; j<=1; j++) {
        a[i] = j;
        if (i==n-1) {
            if (checkDoiXung(a)) {
                hienthi();
            }
        } else Try(i+1);
    }
}

int main() {
    cin>> n;
    Try(0);
    return 0;
}