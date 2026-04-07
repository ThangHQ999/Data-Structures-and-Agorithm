#include <bits/stdc++.h>
using namespace std;

char c1, c2;
string a;
int x[128];

void hienthi() {
    cout << a << endl;
}

void Try(int len) {
    for (char j = c1; j <= c2; j++) {
        if (!x[j]) {
            a.push_back(j);
            x[j] = 1;
            
            if (a.length() == c2 - c1 + 1) {
                hienthi();
            } else {
                Try(len + 1);
            }
            
            x[j] = 0;
            a.pop_back();
        }
    }
}

int main() {
    cin >> c2 >> c1;
    if (c1 > c2) swap(c1, c2);
    memset(x, 0, sizeof(x)); 
    Try(1);
    return 0;
}