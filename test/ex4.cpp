#include <bits/stdc++.h>
using namespace std;

int dem[10000] = {0};

int main() {
    int n;
    cin>> n;
    int x;
    for (int i=0; i<n; i++) {
        cin>> x;
        dem[x]++;
    }
    for (int i=1; i<=1000; i++) {
        if (dem[i] > 0) {
            cout<< i << " "; 
        }
    }
    cout<< endl;
    return 0;
}