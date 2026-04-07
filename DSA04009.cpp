#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9+7;
int n;

struct Matrix {
    long long m[10][10] = {0};
};

Matrix multiply(Matrix A, Matrix B) {
    Matrix res;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            for (int k=0; k<n; k++) {
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
        long long k;
        cin>> n >> k;
        Matrix A;
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cin>> A.m[i][j];
            }
        }
        Matrix res;
        res = power(A, k);
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                cout<< res.m[i][j] << " ";
            }
            cout<< endl;
        }
        
    }
    
    return 0;
}