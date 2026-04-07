#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node *left, *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
int cnt = 0;
void countInternalNodes(Node* root) {
    if (!root) return;
    if (root->left || root->right) {
        cnt++;
        countInternalNodes(root->left);
        countInternalNodes(root->right);
    }
}

Node* buildTree(int pre[], int n) {
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

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        cnt = 0;
        int n;
        cin>> n;
        int pre[n];
        for (int i=0; i<n; i++) cin>> pre[i];
        Node* root = buildTree(pre, n);
        countInternalNodes(root);
        cout<< cnt << endl;
    }
    
    return 0;
}