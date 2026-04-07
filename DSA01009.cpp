#include <bits/stdc++.h>
using namespace std;
string s = "";
int n, k;
vector<string> results;

void hienthi() {
    cout<< results.size() << endl;

        for (string result: results) {
            cout<< result << endl;
        }
    
}

bool check(string str) {
    int count = 0;
    int sequences = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'A') {
            count++;
        } else {
            if (count == k) sequences++;
            count = 0;
        }
    }
    if (count == k) sequences++;
    return sequences == 1;
}

void Try(int i) {
    for (char c: {'A', 'B'}) {
        s.push_back(c);
        if (i==n) {
            if (check(s)) {
                results.push_back(s);
            }
        }
        else Try(i+1);
        s.pop_back();
    }
}

int main() {
    cin>> n >> k;
    Try(1);
    hienthi();
    return 0;
}