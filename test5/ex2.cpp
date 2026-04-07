#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        long long p;
        cin>> p;
        if (p == 0) {
            cout<< 10 << endl;
            continue;
        }
        if (p == 1) {
            cout<< 1 << endl;
            continue;
        }
        vector<int> digits;
        for (int i=9; i>=2; i--) {
            while (p%i == 0)
            {
                digits.push_back(i);
                p/=i;
            }
        }
        if (p > 1) {
            cout<< -1 << endl;
        } else {
            sort(digits.begin(), digits.end());
            for (int i: digits) {
                cout<< i;
            }
            cout<< endl;
        }
    }
    
    return 0;
}