#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x) {
        data = x;
        left = right = NULL;
    }
};

Node* buildTree(int pre[], int n) {
    if (n == 0) return NULL;
    Node* root = new Node(pre[0]);
    stack<Node*> st;
    st.push(root);
    for (int i=1; i<n; i++) {
        Node* temp = NULL;
        while (!st.empty() && pre[i] > st.top()->data)
        {
            temp = st.top();
            st.pop();
        }
        if (temp != NULL) {
            temp->right = new Node(pre[i]);
            st.push(temp->right);
        } else {
            Node* newNode = new Node(pre[i]);
            st.top()->left = newNode;
            st.push(newNode);
        }
    }
    return root;
}

void postorder(Node* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout<< root->data << " ";
}

void solve() {
    int n;
    cin >> n;
    int pre[n];
    for (int i=0;i<n; i++) {
        cin>> pre[i];
    }
    Node* root = buildTree(pre, n);
    postorder(root);
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