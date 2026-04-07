#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a;
vector<bool> x;

void khoitao() {
    for (int i=1; i<=n; i++) {
        a[i] = i;
    }
}

bool check() {
    for (int i=2; i<=n; i++) {
        int val = a[i];
        if (val == a[i-1] - 1 || val == a[i-1]+1) {
            return false;
        }
    }
    return true;
}
 
void hienthi() {
    for (int j=1; j<=n; j++) {
        cout<< a[j];
    }
    cout<< "\n";
}

void Try(int i) {
    for (int j=1; j<=n; j++) {
        if (!x[j]) {
            a[i] = j;
            x[j] = true;
            if (i == n) {
                if (check()) hienthi();
            }
            else Try(i+1);
            x[j] = false; 
        }
        
    }
}

int main() {
    int t;
    cin>> t;
    cin.ignore();
    while (t--)
    {
        cin>> n;
        a.assign(n+1, 0);
        x.assign(n+1, false);
        Try(1);
        a.clear();
        x.clear();
    }
    
   return 0;
}