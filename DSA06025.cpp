#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin>> a[i];
    }
    for (int i=0; i<n; i++) {
        int key = a[i];
        int j = i-1;
        while (j>=0 && key < a[j])
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j +1] = key;
        cout<< "Buoc " << i << ":";
        for (int k=0; k<=i; k++) {
            cout<< " " << a[k];
        }
        cout<< endl;
    }
    return 0;
}