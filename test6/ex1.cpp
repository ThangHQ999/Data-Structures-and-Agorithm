#include <bits/stdc++.h>
using namespace std;
long long f[105];
void precompute() {
    f[0] = 1;
    f[1] = 1;
    f[2] = 2;
    f[3] = 4;
    for (int i=4; i<51; i++) {
        f[i] = f[i-1] + f[i-2] + f[i-3];
    }
}
int main() {
    precompute();
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        cout<< f[n] << endl;
    }
    
    return 0;
}