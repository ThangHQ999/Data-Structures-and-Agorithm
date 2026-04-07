#include <bits/stdc++.h>
using namespace std;
char c;
int k;
string s;

void hienthi() {
    cout<< s << endl;
}

void Try(char i) {
    for (int j=i; j<=c; j++) {
        s.push_back(j);
        if (s.length() == k) hienthi();
        else Try(j);
        s.pop_back();
    }
}

int main() {
    cin>> c >> k;
    Try('A');
    return 0;
}