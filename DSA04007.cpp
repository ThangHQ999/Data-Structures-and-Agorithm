#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;
    string a, b;
    cin >> k >> a >> b;

    string res = "";
    int i = a.length() - 1;
    int j = b.length() - 1;
    int remember = 0;

    while (i >= 0 || j >= 0 || remember > 0) {
        int digitA = (i >= 0) ? a[i] - '0' : 0;
        int digitB = (j >= 0) ? b[j] - '0' : 0;

        int sum = digitA + digitB + remember;
        res += to_string(sum % k);
        remember = sum / k;       

        i--; j--;
    }

    reverse(res.begin(), res.end());
    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}