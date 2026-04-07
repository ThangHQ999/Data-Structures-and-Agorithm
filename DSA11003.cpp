#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
    Node (int val) {
        data = val;
        left = right = NULL;
    }
};
unordered_map<int, int> inMap;
int preIndex = 0;
void postorder(Node* root) {
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    cout<< root->data << " ";
}

Node* buildTree(int pre[], int inStart, int inEnd) {
    if (inStart > inEnd) return NULL;
    int curr = pre[preIndex++];
    Node* tNode = new Node(curr);
    if (inStart == inEnd) return tNode;
    int inIndex = inMap[curr];
    tNode->left = buildTree(pre, inStart, inIndex - 1);
    tNode->right = buildTree(pre, inIndex + 1, inEnd);
    return tNode;
}

int main() {
    int t;
    cin>> t;
    while (t--)
    {
        preIndex = 0;
        inMap.clear();
        int n;
        cin>> n;
        int pre[n], in[n];
        for (int i=0; i<n; i++) {
            cin>> in[i];
        }
        for (int i=0; i<n; i++) {
            cin>> pre[i];
        }
        for (int i=0; i<n; i++) {
            inMap[in[i]] = i;
        }
        Node* root = buildTree(pre, 0, n-1);
        postorder(root);
        cout<< endl;
    }
    
    return 0;
}