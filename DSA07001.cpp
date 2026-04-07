#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    int n;   
    vector<int> st;

    while (cin >> s) {
        if (s == "push") {
            cin >> n;
            st.push_back(n);
        } 
        else if (s == "pop") {
            if (!st.empty()) {
                st.pop_back(); 
            }
        } 
        else if (s == "show") {
            if (st.empty()) {
                cout << "empty" << endl;
            } else {
                for (int i = 0; i < st.size(); i++) {
                    cout << st[i] << " ";
                }
                cout << endl;
            }
        }
    }
    
    return 0;
}