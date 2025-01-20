class Solution {
public:
    bool preorder(TreeNode* root)
    {
        bool flag=true;
        if(root==NULL)
            return true;
        if(root->left &&root->val!=root->left->val)
            return false;
        if(root->right &&root->val!=root->right->val)
            return false;
    
        return preorder(root->left) && preorder(root->right);
    }
    bool isUnivalTree(TreeNode* root) {
        return preorder(root);
    }
};