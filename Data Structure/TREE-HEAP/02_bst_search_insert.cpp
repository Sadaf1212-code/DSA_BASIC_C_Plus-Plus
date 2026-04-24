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

bool search(Node* root, int x) {
    if(root == NULL) return false;
    if(root->val == x) return true;

    if(x < root->val)
        return search(root->left, x);
    else
        return search(root->right, x);
}

void insert(Node* &root, int x) {
    if(root == NULL) {
        root = new Node(x);
        return;
    }

    if(x < root->val) {
        insert(root->left, x);
    } else {
        insert(root->right, x);
    }
}

int main() {
    Node* root = NULL;

    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insert(root, x);
    }

    int target;
    cin >> target;

    if(search(root, target))
        cout << "Found\n";
    else
        cout << "Not Found\n";
}
