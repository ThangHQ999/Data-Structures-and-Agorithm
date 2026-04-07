#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string s;
        cin>> s;
        long long cnt = 0;
        long long swaps =0;
        long long imbalance = 0;
        for (char c: s) {
            if (c == '[') {
                cnt++;
                if (imbalance > 0) {
                    swaps += imbalance;
                    imbalance--;
                }
            } else {
                cnt--;
                if (cnt < 0) {
                    imbalance++;
                }
            }
        }
        cout<< swaps << endl;
    }
    
    return 0;
}