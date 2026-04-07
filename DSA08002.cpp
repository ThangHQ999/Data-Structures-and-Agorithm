#include <bits/stdc++.h>
using namespace std;
int main() {
    queue<int> a;
    int value;
    string command;
    int q;
    cin>> q;
    while (q--)
    {
        cin>> command;
        if (command == "PUSH") {
            cin>> value;
            a.push(value);
        } else if (command == "POP") {
            if (!a.empty()) a.pop();
        } else if (command == "PRINTFRONT") {
            if (a.empty()) {
                cout<< "NONE\n";
            } else {
                cout<< a.front() << endl;
            }
        }

    }
    
    return 0;
}