#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin>> a[i];
    }
    for (int i=0; i<n-1; i++) {
        bool check = false;
        for (int j=i+1; j<n; j++) {
            if (a[j] < a[i]) {
                check = true;
                swap(a[j], a[i]); 
            }
        }
        if (check) {
            cout<< "Buoc " << i + 1 << ":";
        for (int k=0; k<n; k++) {
            cout<< " " << a[k];
        }
            cout<< endl;
        }
    }
    return 0;
}