#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    string res = "";
    int max = 0;

    while (cin>> s)
    {
        if (s.length() > max)  {
            max = s.length();
            res = s;
        } else if (s.length() == max) {
            if (s > res) {
                res = s;
                max = s.length();
            }
        }
    }
    cout<< res;
    return 0;
}