class Solution {
public:
    void inorderTraversalcalc(TreeNode* root,vector<int> &v)
    {
        if(root==NULL) return;
        inorderTraversalcalc(root->left,v);
        v.push_back(root->val);
        inorderTraversalcalc(root->right,v);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;
        inorderTraversalcalc(root,v);
        return v;
    }
};