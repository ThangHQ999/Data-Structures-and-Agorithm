#include<bits/stdc++.h>
using namespace std;
int n, k, a[100], target, cnt = 0;
bool vs[100];

void Try(int idx, int check) {
    if (check == k-1) {
        int curSum = 0;
        for (int i=idx; i<n; i++) {
            curSum+=a[i];    
        }
        if (curSum == target) cnt++;
        return;
    }
    int curSum = 0;
    for (int i=idx; i<n-1; i++) {
        curSum += a[i];
        if (curSum == target) {
            Try(i+1, check + 1);
        }
    }
}

int main() {
    memset(vs, false, sizeof(vs));
    cin>> n >> k;
    int sum = 0;
    for (int i=0; i<n; i++) {
        cin>> a[i];
        sum += a[i];
    }
    if (sum % k != 0) {
        cout << 0 << endl;
        return 0;
    }
    target = sum / k;
    Try(0, 0);
    cout<< cnt << endl;
    return 0;
}