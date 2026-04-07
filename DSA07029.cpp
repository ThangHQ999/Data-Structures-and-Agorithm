#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>> t;
    while (t--)
    {
        string s;
        cin>> s;
        stack<string> stringStack;
        stack<int> cntStack;
        string currentString = "";
        int k = 0;
        for (char c: s) {
            if (isdigit(c)) {
                k = k*10 + (c - '0');
            } else if (c == '[') {
                cntStack.push(k == 0 ? 1 : k);
                stringStack.push(currentString);
                currentString = "";
                k = 0;
            } else if (c == ']') {
                string prev = stringStack.top();
                stringStack.pop();
                int n = cntStack.top();
                cntStack.pop();
                string temp = "";
                for (int i=0; i<n; i++) {
                    temp += currentString;
                }
                currentString = prev + temp;
            } else {
                currentString += c;
            }
        }
        cout<< currentString << endl;
    }
    
    return 0;
}