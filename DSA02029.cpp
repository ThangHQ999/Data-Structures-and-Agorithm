#include <bits/stdc++.h>
using namespace std;
int m;

void Try(int n, char a, char b, char c) {
    if (n == 1) {
        cout<< a << " -> " << c << endl;
        return;
    }
    Try(n-1, a, c, b);
    cout<< a << " -> " << c << endl;
    Try(n-1, b, a, c);
}

int main() {
    cin>> m;
    Try(m, 'A', 'B', 'C');
    return 0;
}