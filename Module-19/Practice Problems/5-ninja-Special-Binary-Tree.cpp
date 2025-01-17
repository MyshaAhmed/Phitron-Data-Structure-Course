bool isSpecialBinaryTree(BinaryTreeNode<int>* root)
{
    if(root==NULL) return true;
    if((root->left!=NULL&& root->right==NULL)||(root->left==NULL&& root->right!=NULL))
        return false;
    bool l=isSpecialBinaryTree(root->left);
    bool r=isSpecialBinaryTree(root->right);
    return l&&r;
}