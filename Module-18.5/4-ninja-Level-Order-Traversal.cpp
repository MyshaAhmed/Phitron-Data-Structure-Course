vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> v;
    if(root==NULL) return v;
    queue<BinaryTreeNode<int>*> q;
    if(root!=NULL) q.push(root);
    while(!q.empty())
    {
        BinaryTreeNode<int>* p=q.front();
        v.push_back(p->val);
        q.pop();
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);

    } 
    return v;
}