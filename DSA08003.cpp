#include <bits/stdc++.h>
using namespace std;
int main() {
    deque<int> a;
    int value;
    string command;
    int q;
    cin>> q;
    while (q--)
    {
        cin>> command;
        if (command == "PUSHFRONT") {
            cin>> value;
            a.push_front(value);
        } else if (command == "PUSHBACK") {
            cin>> value;
            a.push_back(value);
        }
        else if (command == "PRINTFRONT") {
            if (a.empty()) {
                cout<< "NONE\n";
            } else {
                cout<< a.front() << endl;
            }
        } else if (command == "PRINTBACK") {
            if (a.empty()) {
                cout<< "NONE\n";
            } else {
                cout<< a.back() << endl;
            }
        } else if (command == "POPFRONT") {
            if (!a.empty()) a.pop_front();
        } else if (command == "POPBACK") {
            if (!a.empty()) a.pop_back();
        }

    }
    
    return 0;
}