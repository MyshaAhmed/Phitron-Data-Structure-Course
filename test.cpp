#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree() {
    int val;
    cin >> val;
    Node* root = (val == -1) ? NULL : new Node(val);
    queue<Node*> q;
    if (root) q.push(root);
    while (!q.empty()) {
        Node* p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node* myLeft = (l == -1) ? NULL : new Node(l);
        Node* myRight = (r == -1) ? NULL : new Node(r);
        p->left = myLeft;
        p->right = myRight;
        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }
    return root;
}

// Traverse the left boundary and print
void leftBoundary(Node* node, vector<int>& result) {
    while (node != NULL) {
        if (node->left || node->right) {
            result.push_back(node->val);
        }
        if (node->left)
            node = node->left;
        else
            node = node->right;
    }
}

// Traverse the right boundary and print (reverse order)
void rightBoundary(Node* node, vector<int>& result) {
    stack<int> temp;
    while (node != NULL) {
        if (node->left || node->right) {
            temp.push(node->val);
        }
        if (node->right)
            node = node->right;
        else
            node = node->left;
    }

    while (!temp.empty()) {
        result.push_back(temp.top());
        temp.pop();
    }
}

// Traverse the leaf nodes (bottom-up) and print
void leafNodes(Node* node, vector<int>& result) {
    if (!node) return;
    if (!node->left && !node->right) {
        result.push_back(node->val);  // Leaf node
    }
    leafNodes(node->left, result);  // Left subtree
    leafNodes(node->right, result); // Right subtree
}

int main() {
    Node* root = input_tree();
    vector<int> result;

    if (root) {
        // Collect the left boundary
        if (root->left) leftBoundary(root->left, result);

        // Collect the leaf nodes (both sides)
        leafNodes(root, result);

        // Collect the right boundary
        if (root->right) rightBoundary(root->right, result);
    }

    // Print all the boundary and leaf nodes in correct order
    for (int val : result) {
        cout << val << " ";
    }

    return 0;
}
