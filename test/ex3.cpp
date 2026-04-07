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
        }
    }
    cout<< res << " - " << max;
    return 0;
}