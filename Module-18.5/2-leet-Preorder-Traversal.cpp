class Solution {
public:
    void preorderTraversalCalc(TreeNode* root,vector<int> &v)
    {
        if(root==NULL) return;
        v.push_back(root->val);
        preorderTraversalCalc(root->left,v);
        preorderTraversalCalc(root->right,v);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> v;
        preorderTraversalCalc(root,v);
        return v;
    }
};