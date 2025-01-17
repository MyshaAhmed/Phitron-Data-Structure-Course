class Solution {
public:
    void postorderHelper(TreeNode* root, vector<int>& v) {
        if (root == NULL) return;
        postorderHelper(root->left, v);
        postorderHelper(root->right, v);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> v;
        postorderHelper(root,v);
        return v;
    }
   
};