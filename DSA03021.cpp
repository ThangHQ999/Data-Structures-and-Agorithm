#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>> n;
    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];
    }
    int minA = *min_element(a.begin(), a.end());
    long long minTotal = -1;
    for (int k=1; k<=minA; k++) {
        long long total = 0;
        bool possible = true;
        for (int i=0; i<n; i++) {
            int b = a[i]/(k + 1) + 1;
            if (a[i] / b != k) {
                possible = false;
                break;
            }
            total += b;
        }
        if (possible) {
            if (minTotal == -1 || total < minTotal) {
                minTotal = total;
            }
        }
    }
    cout<< minTotal << endl;
    return 0;
}