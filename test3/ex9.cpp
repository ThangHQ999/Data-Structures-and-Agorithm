#include <bits/stdc++.h>
using namespace std;

long long pow(int a, int b) {
    if (b == 0) return 1;
    if (b == 1) return a;
    long long s = pow(a, b/2);
    if (b %2 == 1) s *= a;
    return s*s;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n, k;
        cin>> n >> k;
        cout<< pow(n, k) << endl;
    }
    
    return 0;
}