#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

struct Matrix {
    vector<
    Matrix() {
        m[0][0] = m[0][1] = m[1][0] = m[1][1] = 0;
    }
};

Matrix multiply(Matrix A, Matrix B) {
    Matrix C;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            for (int k=0; k<2; k++) {
                C.m[i][j] = (C.m[i][j] + A.m[i][k] * B.m[k][j]) % mod;
            }
        }
    }
    return C;
}

Matrix power(Matrix A, long long p) {
    Matrix res;
    res.m[0][0] = 1;
    res.m[1][1] = 1;
    while (p>0)
    {
        if (p & 1) res = multiply(res, A);
        A= multiply(A, A);
        p >>= 1;
    }
    return res;
}

long long solve(Matrix A) {
    for (int i=0; i<A.m; i++) {
        for (int j=0; j<2; j++) {
            
        }
    }
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        int n;
        cin>> n;
        Matrix T;
        T.m[0][0] = 1;
        T.m[0][1] = 1;
        T.m[1][0] = 1;
        T.m[1][1] = 0;
        T = power(T, n);
        cout<< T.m[0][1] << endl;
    }
    
    return 0;
}