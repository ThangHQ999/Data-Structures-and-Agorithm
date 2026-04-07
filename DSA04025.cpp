#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;

struct Matrix {
    long long m[2][2];
    Matrix() {
        m[0][0] = m[0][1] = m[1][0] = m[1][1] = 0;
    }
};

Matrix multiply(Matrix A, Matrix B) {
    Matrix res;
    for (int i=0; i<2; i++) {
        for (int j=0; j<2; j++) {
            for (int k=0; k<2; k++) {
                res.m[i][j] = (res.m[i][j] + A.m[i][k]*B.m[k][j])%mod;
            }
        }
    }
    return res;
}

Matrix power(Matrix A, long long n) {
    if (n == 1) return A;
    Matrix temp = power(A, n/2);
    temp = multiply(temp, temp);
    if (n%2!=0) temp = multiply(temp, A);
    return temp;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        long long n;
        cin>> n;
        Matrix A;
        if (n==0) {
            cout<< 0 << endl;
            continue;
        }
        if (n==1) {
            cout<< 1 << endl;
            continue;
        }
        A.m[0][0] = 1; A.m[0][1] = 1;
        A.m[1][0] = 1; A.m[1][1] = 0;
        Matrix res = power(A, n-1);
        cout<< res.m[0][0] << endl;
    }
    
    return 0;
}