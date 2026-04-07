#include <bits/stdc++.h>
using namespace std;

int n, k, a[100];
vector<int> res;
int cnt = 0;
vector<vector<int>> listResult;

void Try(int i, int sum) {
    for (int j=i; j<=n; j++) {
        if (sum + a[j] <= k) {
            sum+=a[j];
            res.push_back(a[j]);
            if (sum == k) {
                listResult.push_back(res);
            } else {
                Try(j+1, sum);
            }
            sum -= a[j];
            res.pop_back();
        }
    }
}

int main() {
    cin>> n >> k;
    for (int i=1; i<=n; i++) {
        cin>> a[i];
    }
    sort(a+1, a+n+1);
    Try(1, 0);
    for (int i = listResult.size() - 1; i >= 0; i--) {
        cnt++;
        for (int j = 0; j < listResult[i].size(); j++) {
            cout << listResult[i][j] << " ";
        }
        cout << endl;
    }
    cout<< cnt << endl;
    return 0;
}