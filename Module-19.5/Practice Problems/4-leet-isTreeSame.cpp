bool isSameTree(TreeNode* p, TreeNode* q) {
        // vector<int> v1;
        // vector<int> v2;

        // preorder(p,v1);
        // preorder(q,v2);
        // return v1==v2;

        // new approach:=====>
        if(p==NULL && q==NULL)
            return true;
        if(p==NULL || q==NULL)
            return false;
        if(p->val != q->val)
            return false;

        return isSameTree(p->left,q->left) && isSameTree(p->right,q->right);
    }
};