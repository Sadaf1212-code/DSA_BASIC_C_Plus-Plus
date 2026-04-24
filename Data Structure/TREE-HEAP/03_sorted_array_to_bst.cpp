#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

Node* convert(vector<int>& a, int l, int r) {
    if(l > r) return NULL;

    int mid = (l + r) / 2;

    Node* root = new Node(a[mid]);

    root->left = convert(a, l, mid - 1);
    root->right = convert(a, mid + 1, r);

    return root;
}

void inorder(Node* root) {
    if(root == NULL) return;

    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    Node* root = convert(a, 0, n - 1);

    inorder(root);
}
