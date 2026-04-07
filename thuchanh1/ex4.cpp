#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>> n;
    deque<int> dq;
    for (int i=0; i<n; i++) {
        int x;
        cin>> x;
        dq.push_back(x);
    }
    int ti = 0, teo = 0;
    bool ti_turn = true;
    while (!dq.empty())
    {
        int checked;
        if (dq.front() > dq.back()) {
            checked = dq.front();
            dq.pop_front();
        } else {
            checked = dq.back();
            dq.pop_back();
        }
        if (ti_turn) {
            ti+=checked;
        } else {
            teo+=checked;
        }
        ti_turn = !ti_turn;
    }
    cout<< ti << " " << teo << endl;
    return 0;
}