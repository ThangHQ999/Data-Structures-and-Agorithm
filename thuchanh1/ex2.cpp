#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int n;
long long k;

struct Matrix
{
    vector<vector<long long>> m;
    Matrix() {
        m.resize(n, vector<long long>(n, 0));
    }
};

Matrix multiply(Matrix a, Matrix b) {
    Matrix c;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            for (int l=0; l<n; l++) {
                c.m[i][j] = (c.m[i][j] + a.m[i][l]*b.m[l][j])%mod;
            }
        }
    }
    return c;
}

Matrix power(Matrix a, long long p) {
    Matrix res;
    for (int i=0; i<n; i++) res.m[i][i] = 1;
    while (k>0)
    {
        if (k % 2 == 1) res = multiply(res, a);
        a = multiply(a, a);
        k /= 2;
    }
    return res;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> n >> k;
    Matrix a;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            cin>> a.m[i][j];
        }
    }
    Matrix b = power(a, k);
    long long sum = 0;
    for (int i=0; i<n; i++) {
        sum = (sum + b.m[i][n-i-1])%mod;
    }
    cout<< sum << endl;
    }
    
    return 0;
}