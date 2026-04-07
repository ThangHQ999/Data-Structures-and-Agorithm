#include <bits/stdc++.h>
using namespace std;
vector<int> a, res;
int n, k;
vector<vector<int>> all_solutions;

void hienthi() {
    vector<int> chosen_numbers;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (res[i] == 1) {
            chosen_numbers.push_back(a[i]);
            sum += a[i];
        }
    }

    if (sum == k) {
        all_solutions.push_back(chosen_numbers);
    }
}

void Try(int i) {
    for (int j=0; j<=1; j++) {
        res[i] = j;
        if (i == n) {
            hienthi();   
        } else {
            Try(i+1);
        }
    }
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cin>> n >> k;
        all_solutions.clear();
        a.assign(n+1, 0);
        res.assign(n+1, 0);
        for (int i=1; i<=n; i++) {
            cin>> a[i];
        }
        sort(a.begin() + 1, a.end());
        Try(1);
        if (all_solutions.empty()) {
            cout << -1;
        } else {
            for (int i = all_solutions.size() - 1; i >= 0; i--) {
                cout << "[";
                for (int j = 0; j < all_solutions[i].size(); j++) {
                    cout << all_solutions[i][j];
                    if (j != all_solutions[i].size() - 1) cout << " ";
                }
                cout << "] ";
            }
        }
        cout<< endl;
    }
    
    return 0;
}