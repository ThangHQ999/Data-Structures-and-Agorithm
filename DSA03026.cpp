#include <bits/stdc++.h>
using namespace std;

void findMax(int n, int s) {
    if (s > 9*n || (s == 0 && n > 1)) {
        cout<< -1;
        return;
    }
    if (s == 0 && n == 1) {
        cout<< 0;
        return;
    }
    string res = "";
    for (int i=0; i<n; i++) {
        if (s >= 9) {
            res += "9";
            s -= 9;
        } else {
            res += to_string(s);
            s = 0;
        }
    }
    cout<< res;
}

void findMin(int n, int s) {
    if (s > 9*n || (s == 0 && n > 1)) {
        cout<< -1;
        return;
    }
    if (s == 0 && n == 1) {
        cout<< 0;
        return;
    }
    vector<int> res(n);
    s -= 1;
    for (int i=n-1; i>0; i--) {
        if (s >= 9) {
            res[i] = 9;
            s -= 9;
        } else {
            res[i] = s;
            s = 0;
        }
    }
    res[0] = s+1;
    for (int i = 0; i < n; i++) cout << res[i];
}


int main() {
    int n, s;
    cin>> n >> s;
    findMin(n, s);
    cout<< " ";
    findMax(n, s);
    return 0;
}