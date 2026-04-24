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

Node* input_tree() {
    int val;
    cin >> val;

    Node* root;
    if(val == -1) root = NULL;
    else root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* leftNode = (l == -1) ? NULL : new Node(l);
        Node* rightNode = (r == -1) ? NULL : new Node(r);

        p->left = leftNode;
        p->right = rightNode;

        if(leftNode) q.push(leftNode);
        if(rightNode) q.push(rightNode);
    }

    return root;
}

void level_order(Node* root) {
    if(root == NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()) {
        Node* f = q.front();
        q.pop();

        cout << f->val << " ";

        if(f->left) q.push(f->left);
        if(f->right) q.push(f->right);
    }
}

int main() {
    Node* root = input_tree();
    level_order(root);
}
