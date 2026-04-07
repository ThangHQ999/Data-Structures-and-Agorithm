#include <bits/stdc++.h>
using namespace std;
vector<long long> cubes;
void precompute() {
    for (long long i=1; i<=1000000; i++) {
        cubes.push_back(i*i*i);
    }
}

bool isSubsequence(string cube, string n) {
    int j = 0;
    for (int i=0; i<n.length() && j<cube.length(); i++) {
        if (n[i] == cube[j]) {
            j++;
        }
    }
    return (j == cube.length());
}

void solve() {
    string n;
    cin>> n;
    long long valN = stoll(n);
    for (int i=cubes.size() -1; i>=0; i--) {
        if (cubes[i] <= valN) {
            if (isSubsequence(to_string(cubes[i]), n)) {
                cout<< cubes[i] << endl;
                return;
            }
        }
    }
    cout<< -1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    precompute();
    int t;
    cin>> t;
    while (t--)
    {
        solve();
    }
    
    return 0;
}