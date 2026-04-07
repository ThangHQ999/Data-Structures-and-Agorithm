#include <iostream>
#include <map>

using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};

bool isLeaf(Node* node) {
    if (node == nullptr) return false;
    return (node->left == nullptr && node->right == nullptr);
}

int sumRightLeaves(Node* root) {
    if (root == nullptr) return 0;

    int res = 0;

    if (root->right != nullptr) {
        if (isLeaf(root->right)) {
            res += root->right->data;
        } else {
            res += sumRightLeaves(root->right);
        }
    }

    if (root->left != nullptr) {
        res += sumRightLeaves(root->left);
    }

    return res;
}

void solve() {
    int n;
    cin >> n;
    map<int, Node*> m;
    Node* root = nullptr;

    while (n--) {
        int u, v;
        char x;
        cin >> u >> v >> x;
        
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

    cout << sumRightLeaves(root) << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}