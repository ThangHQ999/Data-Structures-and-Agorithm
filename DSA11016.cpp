#include <bits/stdc++.h>
using namespace std;
set<int> s;
int currIndex = 0;
vector<int> a;
struct Node {
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

void inorder(Node* root) {
    if (root == NULL) return;
    inorder(root->left);
    root->data = a[currIndex];
    currIndex++;
    cout<< root->data << " ";
    inorder(root->right);
}
  
void solve() {
    currIndex = 0;
    a.clear();
    s.clear();
    int n;
    cin >> n;
    map<int, Node*> m;
    Node* root = NULL;
    
    while (n--) {
        int u, v;
        char x;
        cin >> u >> v >> x;
        s.insert(u);
        s.insert(v);
        if (m.find(u) == m.end()) {
            root = new Node(u);
            m[u] = root;
        }
        
        Node* parent = m[u];
        Node* child = new Node(v);
        m[v] = child;

        if (x == 'L') parent->left = child;
        else parent->right = child;
    }
    for (int i: s) {
        a.push_back(i);
    }
    inorder(root);
    cout<< endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}