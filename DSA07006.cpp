#include <bits/stdc++.h>
using namespace std;
int a[105] = {0};
string s;
vector<pair<int, int>> pairs;
set<string> results;
bool mark[220];

void Try(int i, int cnt) {
    if (i == pairs.size()) {
        if (cnt == 0) return;
        string res = "";
        for (int i=0; i<s.length(); i++) {
            if (!mark[i]) res += s[i];
        }
        results.insert(res);
        return;
    }
    Try(i+1, cnt);
    mark[pairs[i].first] = true;
    mark[pairs[i].second] = true;
    Try(i+1, cnt + 1);
    mark[pairs[i].first] = false;
    mark[pairs[i].second] = false;
}

int main() {
    cin>> s;
    int n = s.length();
    stack<int> st;
    for (int i=0; i<n; i++) {
        if (s[i] == '(') {
            st.push(i);
        } else if (s[i] == ')') {
            pairs.push_back({st.top(), i});
            st.pop();
        }
    }
    memset(mark, false, sizeof(mark));
    Try(0, 0);
    for (auto str: results) {
        cout<< str << endl;
    }
    return 0;
}