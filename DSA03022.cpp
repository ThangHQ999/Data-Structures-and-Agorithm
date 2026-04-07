#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>> n;
    vector<int> a(n);
    vector<long long> b;
    for (int i=0; i<n; i++) {
        cin>> a[i];
    }
    sort(a.begin(), a.end());
    long long s1 = (long long)(a[n-1]*a[n-2]);
    long long s2 = (long long)(s1*a[n-3]);
    long long s3 = (long long)(a[0]*a[1]); 
    long long s4 = (long long)(s3*a[n-1]);
    b.push_back(s1);
    b.push_back(s2);
    b.push_back(s3);
    b.push_back(s4);
    cout<< *max_element(b.begin(), b.end()) << endl; 
    return 0;
}