#include <bits/stdc++.h>
using namespace std;

char c;
string a;
int x[128];

bool isVowel(char k) {
    return (k == 'A' || k == 'E' || k == 'I' || k == 'O' || k == 'U');
}

bool check() {
    for (int i = 0; i < a.length(); i++) {
        if (isVowel(a[i])) {
            if (i > 0 && i < a.length() - 1) { 
                if (!isVowel(a[i-1]) && !isVowel(a[i+1])) {
                    return false;
                }
            }
        }
    }
    return true;
}

void hienthi() {
    cout << a << endl;
}

void Try(int len) {
    for (char j = 'A'; j <= c; j++) {
        if (!x[j]) {
            a.push_back(j);
            x[j] = 1;
            
            if (a.length() == c - 'A' + 1) {
                if (check()) hienthi();
            } else {
                Try(len + 1);
            }
            
            x[j] = 0;
            a.pop_back();
        }
    }
}

int main() {
    cin >> c;
    memset(x, 0, sizeof(x)); 
    Try(1);
    return 0;
}