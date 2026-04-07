#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, x;
vector<string> v;

void check() {
    vector<int> tmp;
    for (int i = 1; i <= n; i++) {
        if (x[i] == 1) {
            tmp.push_back(a[i]);
        }
    }

    if (tmp.size() < 2) return;
    
    for (int i = 0; i < tmp.size() - 1; i++) {
        if (tmp[i] > tmp[i+1]) return;
    }

    string s = "";
    for (int i = 0; i < tmp.size(); i++) {
        s += to_string(tmp[i]);
        if (i != tmp.size() - 1) s += " ";
    }
    v.push_back(s);
}

void Try(int i) {
    for (int j = 0; j <= 1; j++) {
        x[i] = j;
        if (i == n) {
            check();
        } else {
            Try(i + 1);
        }
    }
}

int main() {
    cin >> n;
    a.assign(n + 1, 0);
    x.assign(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    Try(1);

    sort(v.begin(), v.end());

    for (string s : v) {
        cout << s << endl;
    }

    return 0;
}