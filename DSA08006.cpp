#include <bits/stdc++.h>
using namespace std;

bool check(string str, long long n) {
    int x = 0;
    for (int i=0; i<str.length(); i++) {
        x  = (x*10 + (str[i] - '0')) % n;
    }
    return x == 0;
}

int main() {
    int t;
    cin>> t;
    cin.ignore();
    while (t--)
    {
        queue<string> q;
        q.push("9");
        long long n;
        cin>> n;
        while (true)
        {
            string z = q.front();
            q.pop();

            if (check(z, n)) {
                cout<< z << "\n";
                break;
            }

            q.push(z+"0");
            q.push(z+"9");
        }
    }
    
    return 0;
}