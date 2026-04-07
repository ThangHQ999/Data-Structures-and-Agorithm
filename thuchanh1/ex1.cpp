#include <bits/stdc++.h>
using namespace std;
int n, m;
int a[100];
vector<bool> vs;

void hienthi() {
    for (int i=1; i<=n; i++) {
        cout<< a[i] << " ";
    }
    cout<< endl;
}

bool check() {
    return a[n] == m;
}

void Try(int i) {
    for (int j=1; j<=n; j++) {
            if (!vs[j]) {
                a[i] = j;
                vs[j] = true;
                if (i == n) {
                    if (check()) {
                        hienthi();
                    }
                } else Try(i+1);
                vs[j] = false;
            }
        
    }
}

int main() {
    cin>> n >> m;
    vs.assign(n+5, false);
    Try(1);
    return 0;
}