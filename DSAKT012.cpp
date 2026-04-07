#include <bits/stdc++.h>
using namespace std;
int n, s;
int t[100];
vector<int> res;

void Try(int idx, int curSum, int cnt) {
    if (curSum == s) {
        res.push_back(cnt);
        return;
    }
    if (curSum > s || idx == n) {
        return;
    }
    Try(idx + 1, curSum + t[idx], cnt + 1);
    Try(idx + 1, curSum, cnt);
}

int main() {
    cin>> n >> s;
    for (int i=0; i<n; i++) {
        cin>> t[i];
    }
    Try(0, 0, 0);
    if (res.empty()) {
        cout<< -1 << endl;
    } else {
        cout<< *min_element(res.begin(), res.end()) << endl;
    }
    return 0;
}